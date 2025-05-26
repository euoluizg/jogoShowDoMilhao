#ifndef PERGUNTAS_H
#define PERGUNTAS_H

#define MAX_TEXTO 256

typedef struct {
    char pergunta[MAX_TEXTO];
    char opcoes[4][MAX_TEXTO]; // A, B, C, D
    int correta;               // índice da resposta correta (0 a 3)
} Pergunta;

void carregarPerguntas(int categoria, Pergunta perguntas[]);

#endif