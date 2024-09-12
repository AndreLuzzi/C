#include <stdio.h>
#include <math.h>

 int main(){
    const double PI = M_PI;
    int raio,area;
    printf("Informe o raio do circulo \n");
    printf("raio: ");
    scanf("%d", &raio);
    area=(PI * raio * raio);
    printf("Area do Circulo:%d",area);

    return 0;
}