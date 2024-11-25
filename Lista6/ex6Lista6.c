#include <stdio.h>

int main(){
    int A[10], menoridade, maioridade, posmenor, posmaior;


    for (int i = 0; i < 10; i++){
        printf("Insira a idade %d: \n", i+1);
        scanf("%d", &A[i]);
    }

    menoridade = A[0];
    maioridade = A[0];
    posmenor = 0;
    posmaior = 0;

    for (int i = 1; i < 10; i++) {
        if (A[i] < menoridade) {
            menoridade = A[i];
            posmenor = i;
        }
        if (A[i] > maioridade) {
            maioridade = A[i];
            posmaior = i;
        }
    }

    printf("A menor idade e: %d\n", menoridade);
    printf("A maior idade e: %d\n", maioridade);
    
}