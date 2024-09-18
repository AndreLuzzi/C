#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("digite o primeiro numero:\n");
    scanf("%d", &A);
    printf("digite o segundo numero:\n");
    scanf("%d", &B);
    if (A > B){
        resultado = A-B;
        printf("O resultado e: %.2d", resultado);
    } 
    else if (B > A){
        resultado = B-A;
        printf("O resultado e: %.2d", resultado);
    }
    
    return 0;
}