#include <stdio.h>

int main() {
    int num, somatorio;
    somatorio = 0;
    num = 0;

    do {
        printf("Digite um numero (para sair, digite um numero negativo): ");
        scanf("%d", &num);

        
        if (num >= 0) {
            somatorio += num;
        }

    } while (num >= 0);

   
    printf("\nA soma dos numeros digitados e: %d\n", somatorio);

    return 0;
}
