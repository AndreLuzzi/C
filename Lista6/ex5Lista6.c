#include <stdio.h>

int main(){
    int A[10], inf15 = 0, igual15 = 0, sup15 = 0;

    for (int i = 0; i < 10; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++){
        if (A[i] < 15) {
            inf15++;
        }  
        if (A[i] > 15) {
            sup15++;
        }
        if (A[i] == 15) {
            igual15++;
        }

    }

    printf("\nResultados:\n");
    printf("Quantos numeros sao inferiores a 15: %d\n", inf15);
    printf("Quantos numeros sao iguais a 15: %d\n", igual15);
    printf("Quantos numeros sao superiores a 15: %d\n", sup15);

    return 0;
}