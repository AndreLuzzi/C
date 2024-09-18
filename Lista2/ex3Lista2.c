#include <stdio.h>

int main() {
    float valorpao, valorbroa, pao, broa, arrecad, poupanca;
    valorpao= 0.12;
    valorbroa= 1.50;

    printf("Escreva quantos paes vendeu: \n");
    scanf("%f", &pao);
    printf("Escreva quantas broas vendeu: \n");
    scanf("%f", &broa);
    arrecad= (pao * valorpao + broa * valorbroa);
    printf("A quantidade vendida foi: %f\n", arrecad);
    poupanca= (arrecad * 0.10);
    printf("Voce deve guardar na poupanca: %f", poupanca);
    
    return 0;
}