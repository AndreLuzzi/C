#include <stdio.h>

int main() {
    int I;
    int A, B, C, temp;

    printf("Digite um numero inteiro e positivo (I): ");
    scanf("%d", &I);
    printf("Digite tres valores inteiros (A, B e C): ");
    scanf("%d %d %d", &A, &B, &C);

    if (I == 1) {
        if (A > B) { temp = A; A = B; B = temp; }
        if (A > C) { temp = A; A = C; C = temp; }
        if (B > C) { temp = B; B = C; C = temp; }
        printf("Ordem crescente: %d, %d, %d\n", A, B, C);
    } else if (I == 2) {
        if (A < B) { temp = A; A = B; B = temp; }
        if (A < C) { temp = A; A = C; C = temp; }
        if (B < C) { temp = B; B = C; C = temp; }
        printf("Ordem decrescente: %d, %d, %d\n", A, B, C);
    } else if (I == 3) {
        int maior, medio, menor;

        if (A >= B && A >= C) {
            maior = A; medio = (B > C) ? B : C; menor = (B < C) ? B : C;
        } else if (B >= A && B >= C) {
            maior = B; medio = (A > C) ? A : C; menor = (A < C) ? A : C;
        } else {
            maior = C; medio = (A > B) ? A : B; menor = (A < B) ? A : B;
        }

        printf("Maior entre os outros dois: %d, %d, %d\n", menor, maior, medio);
    } else {
        printf("I nao e um valor valido. Deve ser 1, 2 ou 3.\n");
    }

    return 0;
}
