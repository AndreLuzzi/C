#include <stdio.h>

void main(){
    int numero;
    int i = 1;
    int soma = 0;
    int intervalo;

    printf("Informe o tamanho do intervalo que deseja para a somatoria\n");
    scanf("%d", &intervalo);

    while (i <= intervalo) { 
        printf("Digite o numero %d\n",i);
        scanf("%d", &numero);

        soma += numero;

        i++;
    }

     printf("A soma dos %d numeros e: %d\n", intervalo, soma);
    
    return 0;
}