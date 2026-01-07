#include <stdio.h>

int main()
{
    float distancia, litros, media;

    printf("Distancia em Km e quantidade de combustivel gasto em litros: ");
    scanf("%f %f", &distancia, &litros);
    media = distancia / litros;
    printf("O gasto médio é de: %.2f km/h\n", media);
    
    return 0;
}