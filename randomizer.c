#include <stdlib.h>
#include <time.h>
#include "randomizer.h"

void sortearPerguntasAleatorias(Pergunta *destino, int categoria) {
    Pergunta todas[20];
    carregarPerguntas(categoria, todas);

    int indices[20];
    for (int i = 0; i < 20; i++) indices[i] = i;

    srand(time(NULL));
    for (int i = 19; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = indices[i];
        indices[i] = indices[j];
        indices[j] = tmp;
    }

    for (int i = 0; i < 5; i++) {
        destino[i] = todas[indices[i]];
    }
}

