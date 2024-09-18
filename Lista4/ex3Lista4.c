#include <stdio.h>

int main() {

    int menu;

    printf("Bom dia!! Selecione o tipo do pagamento:\n 1-Venda a vista\n 2-Venda a Prazo 30 dias\n 3-Venda a Prazo 60 dias\n 4-Venda a Prazo com 90 dias\n 5-Venda com cartão de débito 
    \n 6-Venda com cartao de credito");
    scanf("%d", &menu);

    if (menu == 1) {
        printf("Voce escolheu a opcao 1-Venda a vista:\n");
    } 
    else if (menu == 2) {
        printf("Voce escolheu a opcao 2-Venda a Prazo 30 dias:\n");
    } 
    else if (menu == 3) {
        printf("Voce escolheu a opcao 3-Venda a Prazo 60 dias:\n");
    } 
    else if (menu == 4) {
        printf("Voce escolheu a opcao 4-Venda a Prazo com 90 dias:\n");
    }
    else if (menu == 5) {
        printf("Voce escolheu a opcao 5-Venda com cartão de débito:\n");
    }
    else if (menu == 6) {
        printf("Voce escolheu a opcao 6-Venda com cartão de crédito:\n");
    }

    return 0;
}