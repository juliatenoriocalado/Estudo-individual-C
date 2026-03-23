#include <stdio.h>

void estatisticas (float *temp, int n, float *maior, float *menor, float *media);

int main(){

    int n;
    scanf("%d", &n);

    float temp[n];

    for (int i=0; i<n; i++){
        scanf("%f", &temp[i]);
    }

    float maior, menor, media;

    estatisticas(temp, n, &maior, &menor, &media);

    printf("media: %.1f\n", media);
    printf("maior: %.1f\n", maior);
    printf("menor: %.1f\n", menor);

    return 0;
}

void estatisticas (float *temp, int n, float *maior, float *menor, float *media){

    float soma = 0.0;

    *maior = *temp;
    *menor = *temp;

    for (float *p = temp; p < temp + n; p++){

        soma = *p + soma;

        if (*p < *menor){
            *menor = *p;

        }
        
        if (*p > *maior){

            *maior = *p;
        }
    }

    *media = soma / n;

}