#include <stdio.h>

void main(){
    int numero;
    int i = 1;
    int maiores;

    while (i <= 5) { 
        printf("Digite o numero %d\n",i);
        scanf("%d", &numero);

        i++;

        if (numero > 8){
        maiores++;
        }
    }

     printf("Total de numeros maiores que 8: %d\n", maiores);
    
    return 0;
}