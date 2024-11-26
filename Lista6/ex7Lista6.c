#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite os 10 primeiros numeros impar:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOs 10 primeiros numeros impar:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}