#include <stdio.h>

//INCOMPLETO

void LerMatriz(int L, int C, int matriz[L][C]){
    for (int l=0; l<L; l++){
        for (int c=0; c<C; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

}

int Soma(int L, int C, int K, int matriz[L][C]){
    int soma = 0;

    for (int l=0; l<L; l++){
        for (int c=0; c<C; c++){
            for (int k=0; k<K; k++){
                soma = soma + matriz[l][];
            }
        }
    }
}

int main(){

    int L, C, K;
    scanf("%d %d %d", &L, &C, &K);
    int matriz[L][C];

    LerMatriz(L, C, matriz[L][C]);




    return 0;
}