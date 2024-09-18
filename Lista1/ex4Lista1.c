#include <stdio.h>


 int main(){
    float PI;
    int raio,area;
    PI = 3.14;
    printf("Informe o raio do circulo \n");
    printf("raio: ");
    scanf("%d", &raio);
    area = (PI * raio * raio);
    printf("Area do circulo:%d",area);

    return 0;
}