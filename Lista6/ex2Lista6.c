#include <stdio.h>

int main() {
    int vetor[20];
    int pares = 0, impares = 0, maioresQue50 = 0, menoresQue7 = 0;

    printf("Digite 20 números para o vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (vetor[i] > 50) {
            maioresQue50++;
        }

        if (vetor[i] < 7) {
            menoresQue7++;
        }
    }

    printf("\nResultados:\n");
    printf("Quantos numeros pares: %d\n", pares);
    printf("Quantos numeros ímpares: %d\n", impares);
    printf("Quantos numeros maiores que 50: %d\n", maioresQue50);
    printf("Quantos numeros menores que 7: %d\n", menoresQue7);

    return 0;
}
