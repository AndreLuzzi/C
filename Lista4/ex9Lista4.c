#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%d", &dia);

    if (dia == 1) {
        printf("Dia da semana: Domingo\n");
    } else if (dia == 2) {
        printf("Dia da semana: Segunda-feira\n");
    } else if (dia == 3) {
        printf("Dia da semana: Terça-feira\n");
    } else if (dia == 4) {
        printf("Dia da semana: Quarta-feira\n");
    } else if (dia == 5) {
        printf("Dia da semana: Quinta-feira\n");
    } else if (dia == 6) {
        printf("Dia da semana: Sexta-feira\n");
    } else if (dia == 7) {
        printf("Dia da semana: Sábado\n");
    } else {
        printf("Erro: Número inválido. Por favor, digite um número de 1 a 7.\n");
    }

    return 0;
}
