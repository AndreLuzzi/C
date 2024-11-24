#include <stdio.h>

int main(){
    char resposta[10];
    int RespSim = 0;

    do{
        printf("Ola tudo bem?");
        scanf("%s", &resposta);

        if (resposta[0] == 'S' && resposta[1] == 'i' && resposta[2] == 'm' && resposta[3] == '\0') {
            RespSim = 1;
        }
    } 
    
    while (!RespSim);

    printf("Que bom que esta tudo bem!\n");

    return 0;
}