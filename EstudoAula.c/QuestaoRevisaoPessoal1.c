#include <stdio.h>

int Encontrar(int N, int V[N], int X);

int main(){

    int N;

    printf("N: ");
    scanf("%d", &N);

    int V[N];

    for (int i=0; i<N; i++){
        printf("Valor %d: ", i);
        scanf("%d", &V[i]);

//SE ATENTAR A ESSE SCANF, MATRIZ FICA MATRIZ[I][C], VETOR FICA V[I]

    }

    int X;
    printf("Valor de X: ");
    scanf("%d", &X);

    int resultado = Encontrar(N, V, X);
    printf("%d", resultado);

    return 0;
}

int Encontrar(int N, int V[N], int X){
    for (int i=0; i<N; i++){
        if (V[i] == X){
            return i;
        }
    }

    return -1; //Tipo um else

}