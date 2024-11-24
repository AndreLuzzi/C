#include <stdio.h>

int main() {
    char nome[50];
    char nome_mais_novo[50];
    int idade;
    int menor_idade = 999;
    int i = 0;
    int j;

    while (i < 10) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);
        printf("Digite a idade de %s: ", nome);
        scanf("%d", &idade);

        
        if (idade < menor_idade) {
            menor_idade = idade;
            
           
            for (j = 0; nome[j] != '\0'; j++) {
                nome_mais_novo[j] = nome[j];
            }
            nome_mais_novo[j] = '\0';
        }

        i++;
    }

    printf("A pessoa mais nova e %s com %d anos.\n", nome_mais_novo, menor_idade);

    return 0;
}
