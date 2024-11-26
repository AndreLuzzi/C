#include <stdio.h>

int main() {
    int matriz[6][6];
    int i, j;
    int menor;

    printf("Digite os valores da matriz 6x6:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][5];

    for (i = 0; i < 6; i++) {
        if (matriz[i][5 - i] < menor) {
            menor = matriz[i][5 - i];
        }
    }

    printf("O menor elemento da diagonal secundaria e: %d\n", menor);

    return 0;
}