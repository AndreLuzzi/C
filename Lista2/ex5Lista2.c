#include <stdio.h>

int main() {
    float preco, reais, litros;
    
    printf("Qual o preco do litro da gasolina? \n");
    scanf("%f", &preco);
    printf("Quantos reais vai abastecer? \n");
    scanf("%f", &reais);
    litros = reais / preco;
    printf("Com %f reias voce consegue abasteceer %f litros", reais, litros);
    
    return 0;
}