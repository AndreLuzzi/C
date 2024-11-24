#include <stdio.h>

void main(){
    int numero;
    int i = 1;
    int pares;

    while (i <= 20) { 
        printf("Digite o numero %d\n",i);
        scanf("%d", &numero);

        i++;

        if (numero % 2 == 0){
        pares++;
        }
    }

     printf("Total de numeros que sao pares: %d\n", pares);
    
    return 0;
}