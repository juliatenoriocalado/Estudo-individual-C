#include <stdio.h>

int funcaoChata(int N, int matriz[N][N]); 

int main(){

    int N;
    scanf("%d", &N);

    int matriz[N][N];

    for (int l=0; l<N; l++){
        for (int c=0; c<N; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    int resultado = funcaoChata(N, matriz);
    printf("Resultado: %d", resultado);

//  for(int l=0; l<N; l++){
//      for (int c=0; c<N; c++){
//          printf("[%d]", matriz[l][c]);
//      }
//      printf("\n"); 

    return 0;
}

int funcaoChata(int N, int matriz[N][N]){

    for (int l=0; l<N; l++){
        for(int c=0; c<N; c++){
            if (l == c && matriz[l][c] != 1){
                    return 0;
                }           
                if (l != c && matriz[l][c] != 0){
                    return 0;
                }
            }
        }

    return 1;
}
