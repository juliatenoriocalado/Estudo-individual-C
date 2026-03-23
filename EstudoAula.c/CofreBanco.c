#include <stdio.h>

void separa_transacoes(float *valores, int n, float *positivos, float *negativos, int *qtd_pos, int *qtd_neg);

int main(){

    int n;
    scanf("%d", &n);

    float valores[n];
    for (int i=0; i<n; i++){
        scanf("%f", &valores[i]);
    }

    float positivos[n];
    float negativos[n];

    int qtd_neg, qtd_pos;

    separa_transacoes(valores, n, positivos, negativos, &qtd_pos, &qtd_neg);

    printf("Positivos: ");
    for (int i=0; i<qtd_pos; i++){
        printf("[%f] ", positivos[i]);
    }

    printf("Negativos ");
    for (int i=0; i<qtd_neg; i++){
        printf("[%f] ", negativos[i]);
    }

    printf("Qtd positivos: %d\n", qtd_pos);
    printf("Qtd negativos: %d\n", qtd_neg);

    return 0;
}

void separa_transacoes(float *valores, int n, float *positivos, float *negativos, int *qtd_pos, int *qtd_neg){

    *qtd_neg = 0;
    *qtd_pos = 0;

    for (float *p = valores; p < valores + n; p++){
        if (*p < 0){
            *negativos = *p;
            negativos++;
            (*qtd_neg)++;

        }

        else if (*p > 0){
            *positivos = *p;
            positivos++;
            (*qtd_pos)++;

        }
    }
}