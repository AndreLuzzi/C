#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], resultado[10];

    printf("Digite os 10 elementos do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os 10 elementos do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    printf("\nVetor resultante da soma dos dois vetores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: %d\n", i + 1, resultado[i]);
    }

    return 0;
}
