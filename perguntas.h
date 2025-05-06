#ifndef PERGUNTAS_H
#define PERGUNTAS_H

typedef struct{
    char pergunta[256];
    char opcoes[4][100];
    int correta;
} Pergunta;

void carregarPerguntas(Pergunta perguntas[], int categoria);

#endif
