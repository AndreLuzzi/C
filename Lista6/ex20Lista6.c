#include <stdio.h>

int main() {
    int A[4][6], B[6][4], C[4][4];
    int i, j, k;

    printf("Digite os valores da matriz A (4x6):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B (6x4):\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            C[i][j] = 0;
            for (k = 0; k < 6; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriz C (produto de A por B):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}