#include <stdio.h>

int main() {
    int A[10][10];
    int i, j;
    int soma = 0;

    printf("Digite os valores da matriz A (10x10):\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            soma += A[i][j];
        }
    }

    printf("Soma dos elementos acima da diagonal principal: %d\n", soma);

    return 0;
}