#include <stdio.h>

int main(){
    int alunos, i;
    float nota1, nota2, media;
    i = 1;

    printf("Qual a quantidade de alunos na turma?\n");
    scanf("%d", &alunos);

    while (i <= alunos){
        printf("Informe a primeira nota do aluno %d\n", i);
        scanf("%f", &nota1);
        printf("Informe a segunda nota do aluno %d\n", i);
        scanf("%f", &nota2);
        
        media = (nota1 + nota2)/2;

        if (media >= 6){
            printf("A sua media e %.1f, portanto esta aprovado.\n", media);
        }
        else{
             printf("A sua media e %.1f, portanto esta reprovado.\n", media);
        }
        
        i++;

    
    }
    
    
}