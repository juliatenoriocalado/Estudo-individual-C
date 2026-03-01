#include <stdio.h>

float AreaCirculo(float raio){
    float Area = 3.14 * raio * raio;
    return Area;
}

int main(){

    float raio;
    
    scanf("%f", &raio);
    float resultado = AreaCirculo(raio);
    printf("%.2f\n", resultado);

    return 0;
}