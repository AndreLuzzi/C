#include <stdio.h>
#include <string.h>

int main() {
    int quantidade, i = 1;
    int gatos = 0, cachorros = 0;
    char tipo[20];

    printf("Digite a quantidade total de animais na loja: ");
    scanf("%d", &quantidade);

    while (i <= quantidade) {
        printf("Digite o tipo do animal %d (gato ou cachorro): ", i);
        scanf("%s", tipo);

        if (strcmp(tipo, "gato") == 0) {
            gatos++;
        } else if (strcmp(tipo, "cachorro") == 0) {
            cachorros++;
        } else {
            printf("Tipo de animal inválido! Por favor, digite 'gato' ou 'cachorro'.\n");
            continue;
        }

        i++;
    }

    printf("\nQuantidade de gatos na loja: %d\n", gatos);
    printf("Quantidade de cachorros na loja: %d\n", cachorros);

    return 0;
}