#include <stdio.h>
int main(){

    int quantidade;
    float combustiveltotal = 0, mediaconsumo = 0, distanciatotal = 0, maiordistancia = 0;

    printf("Quantas viagens voce deseja realizar? ");
    scanf("%d", &quantidade);

    for (int i=1; i <= quantidade; i++){

        float tempo, velocidade, distanciaviagem, combustivelviagem;

        printf("Tempo gasto (h) %d\n", i);
        scanf("%f", &tempo);
        printf("Velocidade (km/h) %d\n", i);
        scanf("%f", &velocidade);

        distanciaviagem = velocidade * tempo;
        combustivelviagem = distanciaviagem / 12.0;
        distanciatotal += distanciaviagem;
        combustiveltotal += combustivelviagem;

        if (distanciaviagem > maiordistancia) {
            maiordistancia = distanciaviagem;
        }
    }

    mediaconsumo = distanciatotal / combustiveltotal;

    printf("Distancia total: %.2f\\n", distanciatotal);
    printf("Combustivel total: %.2f\n", combustiveltotal);
    printf("Media de consumo: %.2f\n", mediaconsumo);

    return 0;
}