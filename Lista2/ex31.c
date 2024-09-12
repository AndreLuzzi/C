#include <stdio.h>

int main() {
    float peso, emag, engor;
    
    printf("Qual o seu peso atual? \n");
    scanf("%f", &peso);
    engor = (peso * 1.15);
    emag = (peso * 0.80);
    printf("Se engordar ficara com %fKg, e se emagrcer tera %fKg", engor, emag);
    
    return 0;
}