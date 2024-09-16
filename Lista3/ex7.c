#include <stdio.h>

int main() {
    char sexo;
    float altura,peso;

    printf("digite sua altura ");
    scanf("%f", &altura);
    printf("digite seu sexo (M para Masculino ou F para Feminino) ");
    scanf("%s", &sexo);
    if (sexo == 'M'){
         peso = (72.7 * altura) - 58;
    }
    else if (sexo == 'F'){
         peso = (62.1 * altura) - 44.7;
    }

    printf("Seu peso ideal seria %fKg", peso);
    
    return 0;
}