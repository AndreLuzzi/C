#include <stdio.h>

void main(){
    int numero;
    int i = 1;
    int entre;

    while (i <= 5) { 
        printf("Digite o numero %d\n",i);
        scanf("%d", &numero);

        i++;

        if (numero > 0 && numero <= 100){
        entre++;
        }
    }

     printf("Total de numeros que estao entre 0 e 100: %d\n", entre);
    
    return 0;
}