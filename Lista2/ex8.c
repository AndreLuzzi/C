#include <stdio.h>

 int main(){
    float n1,n2,n3,media;
    printf("informe a nota 1: ");
    scanf("%f", &n1);
    printf("informe a nota 2: ");
    scanf("%f", &n2);
    printf("informe a nota 3: ");
    scanf("%f", &n3); 
    media = (n1 * 1 + n2 * 2 + n3 * 3) / 6;
    printf("Sua media ponderada:%f",media);

    return 0;

}