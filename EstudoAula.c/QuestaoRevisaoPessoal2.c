#include <stdio.h>

int ContarElementosMaiorQueAMedia(int N, int V[N]);

int main(){

    int N;

    scanf("%d", &N);

    int V[N];

    for (int i=0; i<N; i++){
        scanf("%d", &V[i]);
    }

    int resultado = ContarElementosMaiorQueAMedia (N, V);
    printf("%d", resultado);

    return 0;
}

int ContarElementosMaiorQueAMedia(int N, int V[N]){

    int soma = 0;
    int maiores = 0; 

    for (int i=0; i<N; i++){
        soma += V[i];
    }

    float media = (float) soma / N;
    
    for (int m=0; m<N; m++){
        if (V[m] > media){
            maiores++;
        }
    }

    return maiores;

}