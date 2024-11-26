#include <stdio.h>

int main() {
    int A[10][10];
    int i, j;

    printf("Digite os valores da matriz A (10x10):\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (j = 0; j < 10; j++) {
        int temp = A[1][j];
        A[1][j] = A[7][j];
        A[7][j] = temp;
    }

    for (i = 0; i < 10; i++) {
        int temp = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = temp;
    }

    for (i = 0; i < 10; i++) {
        int temp = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = temp;
    }

    for (i = 0; i < 10; i++) {
        int temp = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = temp;
    }

    printf("Matriz A atualizada:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}