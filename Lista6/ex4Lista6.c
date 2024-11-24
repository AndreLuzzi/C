#include <stdio.h>

int main(){
    int A[8], B[8], C[8];

    for (int i = 0; i < 8; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

     for (int i = 0; i < 8; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &B[i]);
    }


    for (int i = 0; i < 8; i++){
         C[i] = A[i] + B[i];
    }

    printf("\nVetor C:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}