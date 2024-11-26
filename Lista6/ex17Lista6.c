#include <stdio.h>

int main() {
    int matriz[7][6];
    int i, soma = 0;

    printf("Digite os valores da matriz 7x6:\n");
    for (i = 0; i < 7; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 6; i++) {
        soma += matriz[4][i];
    }

    for (i = 0; i < 7; i++) {
        soma += matriz[i][2];
    }

    soma -= matriz[4][2];

    printf("A soma dos elementos da linha 5 e da coluna 3 e: %d\n", soma);

    return 0;
}