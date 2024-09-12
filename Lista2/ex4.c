#include <stdio.h>

int main() {
    int nome, idade, dias;
    
    printf("Qual o seu nome? \n");
    scanf("%d", &nome);
    printf("Quantos anos vc tem? \n");
    scanf("%d", &idade);
    dias = (idade * 365);
    printf("Nossa %d, voce ja viveu %d dias", nome, dias);
    
    return 0;
}