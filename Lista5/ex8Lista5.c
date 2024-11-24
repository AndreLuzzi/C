void main(){
    int num;
    int i = 1;

    printf("Informe o numero que deseja ver a tabuada\n");
    scanf("%d", &num);

    while (i <= 10) { 
         printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}