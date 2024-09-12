#include <stdio.h>

 int main(){
    int P,M,G,vP,vM,vG,total;
    vP = 10;
    vM = 12;
    vG = 15;
    printf("informe quantas camisetas P: ");
    scanf("%d", &P);
    printf("informe quantas camisetas M: ");
    scanf("%d", &M);
    printf("informe quantas camisetas G: ");
    scanf("%d", &G);
    total = P * vP + M * vM + G * vG;
    printf("Sua compra custou %d reais", total);

    return 0;

}