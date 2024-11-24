#include <stdio.h>

int main(){
    float quilometragem;
    float quilometragemfinal;


    while (quilometragemfinal <= 4000){
        printf("Informe a quilometragem percorrida:\n");
        scanf("%f", &quilometragem);

        quilometragemfinal += quilometragem;

        printf("Quilometragem total percorrida: %.2f km\n", quilometragemfinal);

        if (quilometragemfinal >= 4000) {
            printf("Voce ultrapassou ou atingiu os 4000 km. Fim da viagem.\n");
            break;
        }
    }

    return 0;
}