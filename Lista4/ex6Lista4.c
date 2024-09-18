#include <stdio.h>

int main() {
    int mes, ano, dias;

    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        dias = 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            dias = 29;
        } else {
            dias = 28;
        }
    }

    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);

    return 0;
}
