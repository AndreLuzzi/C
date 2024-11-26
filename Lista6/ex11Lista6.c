#include <stdio.h>

int main() {
    int vetor1[20], vetor2[20], vetorFinal[40];
    int i;

    printf("Digite os 20 valores do primeiro vetor:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 20 valores do segundo vetor:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 20; i++) {
        vetorFinal[i * 2] = vetor1[i];      
        vetorFinal[i * 2 + 1] = vetor2[i];
    }

    printf("Vetor final:\n");
    for (i = 0; i < 40; i++) {
        printf("%d ", vetorFinal[i]);
    }
    printf("\n");

    return 0;
}