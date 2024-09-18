#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra do alfabeto (Em letra maiuscula): ");
    scanf(" %c", &letra);

    if (letra >= 'A' && letra <= 'Z') {
        if (letra == 'A' ||letra == 'E' ||letra == 'I' || letra == 'O' || letra == 'U') {
            printf("A letra '%c' e uma vogal.\n", letra);
        } else {
            printf("A letra '%c' e uma consoante.\n", letra);
        }
    } else {
        printf("Erro: A letra digitada nao e valida, escreva uma letra em maiusculo Ex: A, B, C...\n");
    }

    return 0;
}
