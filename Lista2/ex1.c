#include <stdio.h>

int main() {
   float l1, l2, area;
   
    printf("Informe o tamanho de um lado do terreno em metros: \n");
    scanf("%f", &l1);
    printf("Informe o tamanho do outro lado do terreno em metros: \n");
    scanf("%f", &l2);
    area = (l1 * l2);
    printf("A area do terreno em metros: %f", area);

    return 0;
}
