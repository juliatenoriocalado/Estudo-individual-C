#include <stdio.h>

int soma(int A, int B){
    int X = A + B;
    return X;
}

int main(){

    int A, B, X;
    scanf("%d %d", &A, &B);

    int resultado = soma(A, B);
    printf("%d", resultado);

    return 0;
}