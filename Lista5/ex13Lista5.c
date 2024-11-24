#include <stdio.h>

void main(){
    int numero;
    int i = 1;
    int entre1 = 0;
    int entre2 = 0;
    int entre3 = 0;

    while (i <= 5) { 
        printf("Digite o numero %d\n",i);
        scanf("%d", &numero);

        i++;

        if (numero >= 0 && numero <= 100){
        entre1++;
        }
         if (numero >= 101 && numero <= 200){
        entre2++;
        }
         if (numero > 200){
        entre3++;
        }
    }

     printf("Total de numeros que estao entre 0 e 100: %d\n", entre1);
     printf("Total de numeros que estao entre 101 e 200: %d\n", entre2);
     printf("Total de numeros que sao maiores que 200: %d\n", entre3);
    
    return 0;
}