#include <stdio.h>

int main() {
    int vetor1[9], vetor2[9], vetor3[9], vetorResultante[9];
    int i;

    printf("Digite os 9 valores do primeiro vetor:\n");
    for (i = 0; i < 9; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 9 valores do segundo vetor:\n");
    for (i = 0; i < 9; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Digite os 9 valores do terceiro vetor:\n");
    for (i = 0; i < 9; i++) {
        scanf("%d", &vetor3[i]);
    }

    for (i = 0; i < 3; i++) {
        vetorResultante[i] = vetor1[i];
        vetorResultante[i + 3] = vetor2[i + 3];
        vetorResultante[i + 6] = vetor3[i + 6];
    }

    printf("Vetor resultante:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", vetorResultante[i]);
    }
    printf("\n");

    return 0;
}