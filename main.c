#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "perguntas.h"
#include "randomizer.h"

#define MAX_JOGADORES 100

typedef struct {
    char nome[50];
    int pontuacao;
} Ranking;

int lerInteiro() {
    int valor;
    while (scanf("%d", &valor) != 1) {
        printf("Entrada invalida. Digite um numero: ");
        while (getchar() != '\n');
    }
    return valor;
}

char lerAlternativa() {
    char letra;
    while (1) {
        scanf(" %c", &letra);
        if (letra == 'A' || letra == 'a' || letra == 'B' || letra == 'b' ||
            letra == 'C' || letra == 'c' || letra == 'D' || letra == 'd') {
            return letra;
        } else {
            printf("Entrada invalida. Digite apenas A, B, C ou D: ");
            while (getchar() != '\n');
        }
    }
}

void exibirRanking(Ranking ranking[], int totalJogadores) {
    if (totalJogadores == 0) {
        printf("\nNenhum jogo foi jogado ainda.\n");
        return;
    }

    printf("\n=== TOP 5 JOGADORES ===\n");
    for (int i = 0; i < totalJogadores && i < 5; i++) {
        printf("%d. %s - %d pontos\n", i + 1, ranking[i].nome, ranking[i].pontuacao);
    }
}

int main() {
    int rodando = 1;
    Ranking ranking[MAX_JOGADORES];
    int totalJogadores = 0;

    while (rodando) {
        
        printf("\n-----------------------------\n");
        printf("Seja bem-vindo ao QuizMaster!\n");
        printf("-----------------------------\n\n");    
        printf("1. Jogar\n");
        printf("2. Ver Ranking\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");

        int escolha = lerInteiro();

        if (escolha == 1) {
            int continuar = 1;
            while (continuar) {
                int categoria;
                Pergunta perguntasSelecionadas[5];
                int acertos = 0;
                char nome[50];

                printf("Digite seu nome: ");
                scanf("%s", nome);

                printf("\nEscolha uma categoria:\n");
                printf("1. Conhecimentos Gerais\n");
                printf("2. Ciencias\n");
                printf("3. Historia\n");
                printf("4. Geografia\n");
                printf("5. Tecnologia\n");
                printf("Digite o numero da categoria: ");
                categoria = lerInteiro();

                sortearPerguntasAleatorias(perguntasSelecionadas, categoria);

                for (int i = 0; i < 5; i++) {
                    printf("\nPergunta %d: %s\n", i + 1, perguntasSelecionadas[i].pergunta);
                    printf("A) %s\n", perguntasSelecionadas[i].opcoes[0]);
                    printf("B) %s\n", perguntasSelecionadas[i].opcoes[1]);
                    printf("C) %s\n", perguntasSelecionadas[i].opcoes[2]);
                    printf("D) %s\n", perguntasSelecionadas[i].opcoes[3]);

                    printf("Sua resposta: ");
                    char resposta = lerAlternativa();

                    int indiceResposta;
                    if (resposta == 'a' || resposta == 'A') indiceResposta = 0;
                    else if (resposta == 'b' || resposta == 'B') indiceResposta = 1;
                    else if (resposta == 'c' || resposta == 'C') indiceResposta = 2;
                    else indiceResposta = 3;

                    if (indiceResposta == perguntasSelecionadas[i].correta) {
                        printf("Correto!\n");
                        acertos++;
                    } else {
                        printf("Errado. A resposta correta era %c.\n", 'A' + perguntasSelecionadas[i].correta);
                    }
                }

                if (totalJogadores < MAX_JOGADORES) {
                    ranking[totalJogadores].pontuacao = acertos;
                    strcpy(ranking[totalJogadores].nome, nome);
                    totalJogadores++;
                }

                for (int i = 0; i < totalJogadores - 1; i++) {
                    for (int j = i + 1; j < totalJogadores; j++) {
                        if (ranking[j].pontuacao > ranking[i].pontuacao) {
                            Ranking temp = ranking[i];
                            ranking[i] = ranking[j];
                            ranking[j] = temp;
                        }
                    }
                }

                int escolhaFim;
                do {
                    printf("\n========= MENU FIM DE JOGO =========\n");
                    printf("1. Jogar Novamente\n");
                    printf("2. Ver Ranking\n");
                    printf("3. Voltar ao Menu Principal\n");
                    printf("Escolha uma opcao: ");
                    escolhaFim = lerInteiro();

                    if (escolhaFim == 1) {
                        break;
                    } else if (escolhaFim == 2) {
                        int voltarRanking = -1;
                        do {
                            exibirRanking(ranking, totalJogadores);
                            printf("\nDigite 0 para voltar: ");
                            voltarRanking = lerInteiro();
                        } while (voltarRanking != 0);
                    } else if (escolhaFim == 3) {
                        continuar = 0;
                    } else {
                        printf("\nOpcao invalida. Tente novamente.\n");
                    }
                } while (escolhaFim != 3);
            }

        } else if (escolha == 2) {
            int voltarRanking = -1;
            do {
                exibirRanking(ranking, totalJogadores);
                printf("\nDigite 0 para voltar ao menu principal: ");
                voltarRanking = lerInteiro();
            } while (voltarRanking != 0);
        } else if (escolha == 3) {
            rodando = 0;
        } else {
            printf("\nOpcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}