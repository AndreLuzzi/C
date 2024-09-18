#include <stdio.h>

int main() {

    float numero, resultado;
    int tcalculo;

    printf("Digite o numero:\n");
    scanf("%f", &numero);
    printf("Selecione o tipo do calculo:\n 101-Raiz quadrada\n 102-A metade\n 103-10 porcento do numero\n 104-O dobro \n");
    scanf("%d", &tcalculo);

    if (tcalculo == 101) {
        resultado = numero*numero;
        printf("A raiz quadrada do seu numero e: %f\n", resultado);
    } 
    else if (tcalculo == 102) {
        resultado = numero/2;
        printf("A metade do seu numero e: %f\n", resultado);
    } 
    else if (tcalculo == 103) {
        resultado = numero * 0.10;
        printf("10 porcento do seu numero e: %f\n", resultado);
    } 
    else if (tcalculo == 104) {
        resultado = numero * 2;
        printf("O dorbro do seu numero e: %f\n", resultado);
    }

    return 0;
}