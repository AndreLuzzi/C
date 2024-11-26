#include <stdio.h>

int main() {
    int A[6][6];
    int i, j;

    printf("Digite os valores da matriz A (6x6):\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 6; i++) {
        int diagonal = A[i][i];
        for (j = 0; j < 6; j++) {
            A[i][j] *= diagonal;
        }
    }

    printf("Matriz A apos a multiplicacao:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}