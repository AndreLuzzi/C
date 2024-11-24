#include <stdio.h>

int main() {
    int fumantes = 25, naoFumantes = 25;
    int areaEscolhida;

    while (fumantes > 0 || naoFumantes > 0) {
        printf("Selecione a area para reserva:\n");
        printf("1. Area de Fumantes\n");
        printf("2. Area de Nao Fumantes\n");
        printf("Escolha a area (1 ou 2): ");
        scanf("%d", &areaEscolhida);

        if (areaEscolhida != 1 && areaEscolhida != 2) {
            printf("Opcao invalida! Por favor, escolha 1 para fumantes ou 2 para nao fumantes.\n");
            continue;
        }

        if (areaEscolhida == 1) {
            if (fumantes > 0) {
                fumantes--;
                printf("Mesa reservada na area de fumantes.\n");
                printf("Mesas restantes na area de fumantes: %d\n", fumantes);
            } else {
                printf("Nao ha mesas disponiveis na area de fumantes.\n");
            }
        } else if (areaEscolhida == 2) {
            if (naoFumantes > 0) {
                naoFumantes--;
                printf("Mesa reservada na area de nao fumantes.\n");
                printf("Mesas restantes na area de nao fumantes: %d\n", naoFumantes);
            } else {
                printf("Nao ha mesas disponiveis na area de nao fumantes.\n");
            }
        }

        if (fumantes == 0 && naoFumantes == 0) {
            printf("Nao ha mais mesas disponiveis para reservas. O restaurante esta cheio.\n");
            break;
        }
    }

    return 0;
}
