#include <stdio.h>

int OutraFuncaoChata(int N; int matriz[N][N]);

int main(){

    int N;

    scanf("%d", &N);

    int matriz[N][N];

    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            printf("Elemento [%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

    int resultado = OutraFuncaoChata(N, matriz);

    return 0;
}

int OutraFuncaoChata(int N, int matriz[N][N]){
    for (int l=0; l<N; l++){
        SomaDosElementos = 0;
        for (int c=0; c<N; c++){
            if ()
        }
    }
}
