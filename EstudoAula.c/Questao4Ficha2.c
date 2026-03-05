#include <stdio.h>

int OMaiorDoVetor(int N, int V[N]);

int main(){

    int N;
    scanf("%d", &N);

    int V[N];

    for (int i=0; i<N; i++){
        scanf("%d", &V[i]);
    }

    int resultado = OMaiorDoVetor(N, V);
    printf("%d", resultado + 1);

    return 0;
}

int OMaiorDoVetor(int N, int V[N]){
    int maior = 0;
    for (int i=1; i<N; i++){
        if (V[i] > V[maior]){
            maior = i;
        }
    }
    return maior;
}