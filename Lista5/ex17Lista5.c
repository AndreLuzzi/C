#include <stdio.h>

int main() {
    float peso, bebida, valorConta;
    const float precoPorKilo = 23.59;

    do {
        printf("Digite o peso do prato (em kg) [Digite 0 para sair]: \n");
        scanf("%f", &peso);

        printf("Digite o valor gasto com bebida [Digite 0 para sair]: \n");
        scanf("%f", &bebida);

        if (peso == 0 && bebida == 0) {
            break;
        }

        valorConta = bebida + (peso * precoPorKilo);

        printf("O valor total da conta e: R$ %.2f\n\n", valorConta);

    } while (1);

    return 0;
}