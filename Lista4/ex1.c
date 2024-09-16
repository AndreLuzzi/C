#include <stdio.h>

int main() {
    char nome;
    int idade;

    printf("Digite o seu nome:\n");
    scanf("%s", &nome);
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 10) {
        printf("Categoria: Infantil\n");
    } 
    else if (idade >= 11 && idade <= 15) {
        printf("Categoria: Juvenil\n");
    } 
    else if (idade >= 16 && idade <= 20) {
        printf("Categoria: Junior\n");
    } 
    else if (idade >= 21 && idade <= 25) {
        printf("Categoria: Profissional\n");
    }

    return 0;
}