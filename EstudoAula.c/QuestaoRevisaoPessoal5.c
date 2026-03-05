#include <stdio.h>

int SomaAcimaDaDiagonalPrincipal(int N, int matriz[N][N]);

int main(){

    int N;

    scanf("%d", &N);

    int matriz[N][N];

    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    int resultado = SomaAcimaDaDiagonalPrincipal(N, matriz);
    printf("%d", resultado);

    return 0;
}

int SomaAcimaDaDiagonalPrincipal(int N, int matriz[N][N]){
    int soma = 0;
    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            if (c > l){
                soma = soma + matriz[l][c];
            }
        }
    }

    return soma;

}
