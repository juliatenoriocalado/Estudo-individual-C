#include <stdio.h>

int SomaDiagonal(int N, int matriz[N][N]);

int main(){

    int N;

    scanf("%d", &N);

    int matriz[N][N];

    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    int resultado = SomaDiagonal(N, matriz);
    printf("%d", resultado);

    return 0;
}

int SomaDiagonal(int N, int matriz[N][N]){
    int somadiagonal = 0;
    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            if (l == c){
                somadiagonal = somadiagonal + matriz[l][c];
            }
        }
    }
    return somadiagonal;
}