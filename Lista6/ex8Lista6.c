#include <stdio.h>

int main(){

    int vetor[16];
    int i;

    for (int i = 0; i < 16; i++){
        printf("Digite as 16 posicoes, essa e a %d:\n", i + 1);
        scanf("%d", &vetor[i]);
    }
    
     for (i = 0; i < 8; i++) {
        vetor[i] = vetor[i] + vetor[i + 8];
        vetor[i + 8] = vetor[i] - vetor[i + 8];
        vetor[i] = vetor[i] - vetor[i + 8];
    }

    
    printf("Vetor final:\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}