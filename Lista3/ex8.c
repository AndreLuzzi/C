#include <stdio.h>

int main() {
    char condicao, A, B, C, D;
    float preco, valorfinal;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a forma de pagamento (A, B, C ou D): ");
    scanf(" %c", &condicao);

     if (condicao == 'A') { 
        valorfinal = preco * 0.90;
    } 
    else if (condicao == 'B') { 
        valorfinal = preco * 0.85;
    } 
    else if (condicao == 'C') {
        valorfinal = preco;
    }   
    else if (condicao == 'D') {
        valorfinal = preco * 1.10;
    } 

    printf("O valor final a ser pago: %.2f\n", valorfinal);

    return 0;
}