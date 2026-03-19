#include <stdio.h>

void FuncaoAine(int *p);

int main(){

    int x = 75;

    printf("Antes da transformacao: %d\n", x);
    FuncaoAine(&x);

    printf("Depois da transformacao: %d\n", x);

    return 0;
}

void FuncaoAine(int *p){

    *p = 67;

}