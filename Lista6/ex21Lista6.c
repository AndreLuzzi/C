#include <stdio.h>

int main() {
    int M[6][6], V[36];
    int i, j, A, index = 0;

    printf("Digite os valores da matriz M (6x6):\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite o valor A: ");
    scanf("%d", &A);

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            V[index] = M[i][j] * A;
            index++;
        }
    }

    printf("Vetor V (resultado da multiplicacao de M por A):\n");
    for (i = 0; i < 36; i++) {
        printf("%d ", V[i]);
        if ((i + 1) % 6 == 0) {
            printf("\n");
        }
    }

    return 0;
}