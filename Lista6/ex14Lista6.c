#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, encontrou = 0;

    printf("Digite os 10 valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais encontrados:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d ", vetor[i]);
                encontrou = 1;
                break;
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum valor repetido encontrado.\n");
    } else {
        printf("\n");
    }

    return 0;
}