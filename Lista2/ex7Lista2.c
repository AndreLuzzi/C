#include <stdio.h>

int main() {
    int dia, vmes, mes, tdia;
    vmes = 30;
    
    printf("Informe um dia: \n");
    scanf("%d", &dia);
     printf("Informe um mes: \n");
    scanf("%d", &mes);
    tdia = (mes * vmes + dia);
    printf("Ja se passaram %d dias desde o inicio do ano", tdia);
    
    return 0;
}