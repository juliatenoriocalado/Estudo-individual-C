#include <stdio.h>

int TriangularSuperior(int N, int matriz[N][N]);

int main(){

    int N;

    scanf("%d", &N);

    int matriz[N][N];

    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    int resultado = TriangularSuperior(N, matriz);
    printf("%d", resultado);


    return 0;
}

int TriangularSuperior(int N, int matriz[N][N]){
    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            if (l > c && matriz[l][c] != 0){
                return 0;
            }
        }
    }

    return 1;

}