#include <stdio.h>

void ajustar(int *a, int *b);
//Void porque ela não precisa retornar nada, ela só altera os valores

int main(){

    int A, B;
    scanf("%d %d", &A, &B);

    ajustar(&A, &B); //Chamando para A e para B

    printf("%d %d", A, B);

    return 0;
}

void ajustar(int *a, int *b){
    if (*a > *b){
        *a = *a - 1;
        *b = *b + 1;

    }else if (*a < *b){
        *a = *a + 1;
        *b = *b - 1;

    }
}