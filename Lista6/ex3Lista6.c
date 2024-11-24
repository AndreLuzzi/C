#include <stdio.h>

int main(){
    int vetorA[8], vetorB[8];

    for (int i = 0; i < 8; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < 8; i++){
         vetorB[i] = vetorA[i] * 2;
    }

    printf("\nVetor A:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetorA[i]);
    }

    printf("\nVetor B (elementos de A multiplicados por 2):\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetorB[i]);
    }

    return 0;
}