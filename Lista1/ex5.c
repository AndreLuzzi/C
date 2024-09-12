#include <stdio.h>

 int main(){
    float n1,n2,n3,p1,p2,p3,somap,media,mediaP;
    printf("Informe as 3 notas e os 3 pesos \n");
    printf("informe a nota 1: ");
    scanf("%f", &n1);
    printf("Informe o peso da nota 1: ");
    scanf("%f", &p1);
    printf("informe a nota 2: ");
    scanf("%f", &n2);
    printf("Informe o peso da nota 2: ");
    scanf("%f", &p2);
    printf("informe a nota 3: ");
    scanf("%f", &n3); 
    printf("Informe o peso da nota 3: ");
    scanf("%f", &p3);
    somap=(p1 + p2 + p3);
    media=(n1 * p1 + n2 * p2 + n3 * p3);
    mediaP=(media / somap);
    printf("Sua media ponderada:%f",mediaP);

    return 0;

}
