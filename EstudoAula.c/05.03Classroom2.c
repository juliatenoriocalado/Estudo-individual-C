#include <stdio.h>

int soma(int X, int Y);

int main(){

    int X, Y;

    scanf("%d %d", &X, &Y);

    int resultado = soma(X, Y);
    printf("%d", resultado);

    return 0;
}

int soma(int X, int Y){
    return X + Y;
}