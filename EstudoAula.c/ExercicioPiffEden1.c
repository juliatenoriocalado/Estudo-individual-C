#include <stdio.h>
int main(){

    int R, C;
    scanf("%d %d", &R, &C);

    int matriz[R][C];
    int soma[R];

    for (int c=0; c<R; c++){
        for (int b=0; b<C; b++){
            scanf("%d", &matriz[c][b]);
        }
    }

    for (int i=0; i<R; i++){
        //For das linhas
        soma[i] = 0;
        //Se não fazer isso, o programa pega o lixo da memória e usa como valor, então inicializamos a variável com 0
        //Soma das linhas
        for (int j=0; j<C; j++){
            //For das colunas
            soma[i] = soma[i] + matriz[i][j];
        }
    }

    for (int p=0; p<R; p++){
        printf("[%d] ", soma[p]);
    }

    return 0;
}