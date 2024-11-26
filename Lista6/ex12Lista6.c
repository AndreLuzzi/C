#include <stdio.h>

int main() {
    int vetor[40];
    int i;

    vetor[0] = 0;
    vetor[1] = 1;

    for (i = 2; i < 40; i++) {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }

    printf("Serie de Fibonacci:\n");
    for (i = 0; i < 40; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}