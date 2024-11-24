#include <stdio.h>

int main() {
    int numCasas, canal, pessoas, totalPessoas = 0;
    int audiencia[5] = {0, 0, 0, 0, 0};
    
    printf("Digite a quantidade de casas participantes da pesquisa: ");
    scanf("%d", &numCasas);

    int i = 1;
    while (i <= numCasas) {
        printf("Casa %d:\n", i);
        printf("Digite o canal assistido (3, 5, 8, 11 ou 13): ");
        scanf("%d", &canal);
        
        if (canal == 3 || canal == 5 || canal == 8 || canal == 11 || canal == 13) {
            printf("Digite a quantidade de pessoas assistindo o canal: ");
            scanf("%d", &pessoas);
            
            switch (canal) {
                case 3: audiencia[0] += pessoas; break;
                case 5: audiencia[1] += pessoas; break;
                case 8: audiencia[2] += pessoas; break;
                case 11: audiencia[3] += pessoas; break;
                case 13: audiencia[4] += pessoas; break;
            }

            totalPessoas += pessoas;
            i++;
        } else {
            printf("Canal invalido. Por favor, escolha entre 3, 5, 8, 11 ou 13.\n");
        }
    }

    printf("\nResultados da pesquisa:\n");
    for (int i = 0; i < 5; i++) {
        float porcentagem = (float)audiencia[i] / totalPessoas * 100;
        printf("Canal %d: %.2f%% de audiencia\n", (i == 0 ? 3 : (i == 1 ? 5 : (i == 2 ? 8 : (i == 3 ? 11 : 13)))), porcentagem);
    }

    return 0;
}