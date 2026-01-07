#include <stdio.h>
int main(){
    int tempo, velocidade, distancia;
    float litros;

    printf("");
    scanf("%d %d", &tempo, &velocidade);
    litros = (distancia = velocidade * tempo)/12.0;
    printf("%.3f\n", litros);

    return 0;
}
