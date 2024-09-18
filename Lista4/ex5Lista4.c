#include <stdio.h>

int main() {
    
    int dia, mes, ano;

    printf("Digite a data no formato DDMMAAAA: ");
    scanf("%2d%2d%4d", &dia, &mes, &ano);

    if ((mes == 12 && dia >= 21) || (mes == 1) || (mes == 2) || (mes == 3 && dia < 21)) {
        printf("Estacao: Verao\n");
    } else if ((mes == 3 && dia >= 21) || (mes == 4) || (mes == 5) || (mes == 6 && dia < 21)) {
        printf("Estacao: Outono\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia < 21)) {
        printf("Estacao: Inverno\n");
    } else if ((mes == 9 && dia >= 21) || (mes == 10) || (mes == 11) || (mes == 12 && dia < 21)) {
        printf("Estacao: Primavera\n");
    } else {
        printf("Data invalida.\n");
    }

    return 0;
}
