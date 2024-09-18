#include <stdio.h>

int main() {
    float quilo, precoquilo, valor;
    precoquilo = 12.00;
    
    printf("Qual o peso? \n");
    scanf("%f", &quilo);
    valor = quilo * precoquilo;
    printf("O total ficou %f reais", valor);
    
    return 0;
}