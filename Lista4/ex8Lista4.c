#include <stdio.h>

int main() {
    char letra;

    printf("Informe a primeira letra do seu estado civil (S,C,V,D):\n");
    scanf("%s", &letra);

    if (letra == 'S') {
        printf("Voce escolheu a letra S entao seu estado civil e Solteiro\n");
    } 
    else if (letra == 'C') {
        printf("Voce escolheu a letra C entao seu estado civil e Casado\n");
    } 
     else if (letra == 'V') {
        printf("Voce escolheu a letra V entao seu estado civil e Viuvo\n");
    } 
     else if (letra == 'D') {
        printf("Voce escolheu a letra D entao seu estado civil e Divorciado\n");
    } 
    else {
        printf("Erro: Letra invalida. Por favor, use S, C, V ou D\n");
    }

    return 0;
}