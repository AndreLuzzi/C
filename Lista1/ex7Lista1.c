#include <stdio.h>

 int main(){
    int a, b, c;
    a=5;
    b=10;
    c=a;
    a=b;
    b=c;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    
    return 0;

}