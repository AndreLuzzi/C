#include <stdio.h>

int main() {
    float n1,n2,n3,soma,media;
    int idaluno;

    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d", &idaluno);
    printf("Informe as 3 notas \n");
    printf("n1: ");
    scanf("%f", &n1);
    printf("\nn2: ");
    scanf("%f",&n2);
     printf("\nn3: ");
    scanf("%f",&n3);
    soma=(n1+n2+n3);
    media=(soma/3);

    if (media >= 7.0) {
        printf("O aluno foi aprovado direto.\n");
    } else if (media >= 5.0) {
        printf("O aluno ficou em recuperacao.\n");
    } else {
        printf("O aluno foi reprovado por nota.\n");
    }

     return 0;
}