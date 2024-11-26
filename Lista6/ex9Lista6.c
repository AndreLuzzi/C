#include <stdio.h>

int main() {
    int vetor[20];
    int x, i, encontrado = 0;

    printf("Digite os 20 valores do vetor:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X a ser buscado: ");
    scanf("%d", &x);

    for (i = 0; i < 20; i++) {
        if (vetor[i] == x) {
            printf("Valor %d encontrado na posicao %d.\n", x, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Valor %d nao encontrado no vetor.\n", x);
    }

    return 0;
}