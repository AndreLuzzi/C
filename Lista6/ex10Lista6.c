#include <stdio.h>

int main(){

    int vetor[40];
    int pares = 0;

    for (int i = 0; i < 40; i++){
        printf("Escreva 40 numeros, esse e o numero %d:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 40; i++){
        if (vetor[i] % 2 == 0 ){
            pares++;
        }
        
    }

    printf("Total de numeros pares: %d\n", pares);
    
}