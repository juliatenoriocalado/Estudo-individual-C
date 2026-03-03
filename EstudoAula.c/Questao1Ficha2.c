#include <stdio.h>

int funcaoChata(int V[], int N){
    if (N == 0){
        return 0;
    }

    int contador = 0;

    for (int i=0; i<N; i++){
        if (V[i] % 2 == 0){
            contador++;
        }
    }

    return contador;
}

int main(){

    int N;
    scanf("%d", &N);
    int V[N];

    for (int i=0; i<N; i++){
        scanf("%d", &V[i]);
    }

    int resultado = funcaoChata(V, N);

    printf("%d", resultado);

    return 0;
}