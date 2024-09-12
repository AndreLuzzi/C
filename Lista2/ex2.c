#include <stdio.h>

int main() {
    int cavalos, ferradura;

    printf("Escreva quantos cavalos voce tem: \n");
    scanf("%d", &cavalos);
    ferradura = cavalos * 4;
    printf("A quantidade de ferraduras que voce precisa e : %d", ferradura);
    
    return 0;
}