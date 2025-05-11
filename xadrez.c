#include <stdio.h>

// Constantes de movimentação
const int bispo_mov = 5;
const int torre_mov = 5;
const int rainha_mov = 8;

int main() {
    // Quantidade de movimentos para cada peça
    int i;

    // Movimentação do Bispo
    printf("Movimentacao do Bispo:\n");
    for (i = 0; i < bispo_mov; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre
    printf("\nMovimentacao da Torre:\n");
    i = 0;
    while (i < torre_mov) {
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha
    printf("\nMovimentacao da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < rainha_mov);

    return 0;
}
