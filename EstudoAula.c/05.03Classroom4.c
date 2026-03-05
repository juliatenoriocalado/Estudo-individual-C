#include <stdio.h>

int quadrado(int X);

int main(){

    int X;

    scanf("%d", &X);

    int resultado = quadrado(X);
    printf("%d", resultado);
    
    return 0;
}

int quadrado(int X){
    return X * X;
}