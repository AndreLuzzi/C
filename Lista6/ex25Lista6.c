#include <stdio.h>

int main() {
    int A[12][12];
    int i, j;
    int soma = 0, count = 0;

    printf("Digite os valores da matriz A (12x12):\n");
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 1; i < 12; i++) {
        for (j = 0; j < i; j++) {
            soma += A[i][j];
            count++;
        }
    }

    if (count > 0) {
        float media = (float)soma / count;
        printf("Media dos elementos abaixo da diagonal principal: %.2f\n", media);
    } else {
        printf("Nao ha elementos abaixo da diagonal principal.\n");
    }

    return 0;
}