#include <stdio.h>

int main() {
    int A[8][8], B[8][8];
    int i, j;
    int maior;

    printf("Digite os valores da matriz A (8x8):\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    maior = A[0][0];
    for (i = 0; i < 8; i++) {
        if (A[i][i] > maior) {
            maior = A[i][i];
        }
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            B[i][j] = A[i][j] / maior;
        }
    }

    printf("Matriz B (apos dividir os elementos de A pelo maior da diagonal principal):\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}