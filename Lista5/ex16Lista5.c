void main(){
    float preco, soma;
    int i = 1;
    int produtos;

    soma = 0;

    printf("Informe a quantidade de produtos comprados\n");
    scanf("%d", &produtos);

    while (i <= produtos) { 
        printf("Digite o preco do produto %d\n",i);
        scanf("%f", &preco);

        soma += preco;

        i++;
    }

     printf("A soma dos %d prdutos deu: R$%.2f\n", produtos, soma);
    
    return 0;
}