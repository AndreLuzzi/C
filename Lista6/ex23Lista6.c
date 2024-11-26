#include <stdio.h>

int main() {
    int B[9][9];
    int i, j, soma = 0;

    printf("Digite os valores da matriz B (9x9):\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 9; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < 9; j++) {
                soma += B[i][j];
            }
        }
    }

    printf("Soma dos elementos das linhas pares de B: %d\n", soma);

    return 0;
}