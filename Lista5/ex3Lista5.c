#include <stdio.h>

void main(){
    char nome[30];
    int i = 1;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    while (i <= 10) { 
        printf("%s\n",nome);
        i++;
    }
    
    return 0;
}