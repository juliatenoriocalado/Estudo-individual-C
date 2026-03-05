#include <stdio.h>

int maior(int X, int Y);

int main(){

    int X, Y;

    scanf("%d %d", &X, &Y);

    int resultado = maior(X, Y);
    printf("%d", resultado);
    
    return 0;
}

int maior(int X, int Y){
    if (X > Y){
        return X;
    }

    return Y;
}