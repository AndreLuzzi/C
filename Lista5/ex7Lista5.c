#include <stdio.h>

void main(){
    int idade;
    int i = 1;
    int maiores;

    while (i <= 20) { 
        printf("Digite a idade %d\n",i);
        scanf("%d", &idade);

        i++;

        if (idade >= 18){
        maiores++;
        }
    }

     printf("Total de pessoas maiores de idade: %d\n", maiores);
    
    return 0;
}