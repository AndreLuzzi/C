#include <stdio.h>

int main() {
    int matriz[6][6];
    int i, soma = 0;

    printf("Digite os valores da matriz 6x6:\n");
    for (i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 6; i++) {
        soma += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal e: %d\n", soma);

    return 0;
}