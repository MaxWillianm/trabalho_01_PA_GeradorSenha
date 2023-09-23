#include <stdio.h>

int main() {
    int vetorOrigem[] = {1, 2, 3, 4, 5};
    int tamanhoOrigem = sizeof(vetorOrigem) / sizeof(vetorOrigem[0]);

    int vetorDestino[1];  // Um vetor de destino com espaço para um elemento

    // Copia os elementos do vetorOrigem para o vetorDestino
    for (int i = 0; i < tamanhoOrigem; i++) {
        vetorDestino[0] = vetorOrigem[i];
    }

    // Verifica o resultado
    printf("Vetor de destino: %d\n", vetorDestino[0]);

    return 0;
}
