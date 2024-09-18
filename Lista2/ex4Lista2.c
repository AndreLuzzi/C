#include <stdio.h>

int main() {
    char nome[100];
    int idade, dias;
    
    printf("Qual o seu nome? \n");
    scanf("%s", &nome);
    printf("Quantos anos vc tem? \n");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("Nossa %s, voce ja viveu %d dias", nome, dias);
    
    return 0;
}