#include <stdio.h>

float media (int a, int b, int c, int d, int e){
    return (a+b+c+d+e)/5.0;
}

int main (){
    int a, b, c, d, e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    printf("Média: %.2f", media(a,b,c,d,e));

    return 0;
}