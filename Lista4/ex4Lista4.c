#include <stdio.h>

int main() {
    float preco,resultado;
    int menu;

    printf("Informe o valor da compra:\n");
    scanf("%f", &preco);
    printf("Agora selecione o tipo do pagamento:\n 1-Venda a vista\n 2-Venda a Prazo 30 dias\n 3-Venda a Prazo 60 dias\n 4-Venda a Prazo com 90 dias\n 5-Venda com cartao de debito\n 6-Venda com cartao de credito\n");
    scanf("%d", &menu);

    if (menu == 1) {
        resultado = preco * 0.90;
        printf("Voce escolheu a opcao 1-Venda a vista, e o valor final e: %.2f\n", resultado);
    } 
    else if (menu == 2) {
         resultado = preco * 0.95;
        printf("Voce escolheu a opcao 2-Venda a Prazo 30 dias, e o valor final e: %.2f\n", resultado);
    } 
    else if (menu == 3) {
        resultado = preco;
        printf("Voce escolheu a opcao 3-Venda a Prazo 60 dias, e o valor final e: %.2f\n", resultado);
    } 
    else if (menu == 4) {
         resultado = preco * 1.05;
        printf("Voce escolheu a opcao 4-Venda a Prazo com 90 dias, e o valor final e: %.2f\n", resultado);
    }
    else if (menu == 5) {
         resultado = preco * 0.92;
        printf("Voce escolheu a opcao 5-Venda com cartao de debito, e o valor final e: %.2f\n", resultado);
    }
    else if (menu == 6) {
         resultado = preco * 0.93;
        printf("Voce escolheu a opcao 6-Venda com cartao de credito, e o valor final e: %.2f\n", resultado);
    }

    return 0;
}