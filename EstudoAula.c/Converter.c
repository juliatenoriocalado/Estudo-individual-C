#include <stdio.h>
#include <string.h>

float converter(char *string, float numero);

int main(){

    char string[10];
    scanf("%s", string);
    
    while (strcmp(string, "dolar") != 0 && strcmp (string, "euro") != 0 && strcmp (string, "libra") != 0){
        printf("Digite dolar libra ou euro");
        scanf("%s", string);
    }

    float numero;
    scanf("%f", &numero);

    while (numero < 0){
        printf("Só positivo");
        scanf("%f", &numero);
    }

    float resultado = converter(string, numero);
    printf("%f", resultado);

    return 0;
}

float converter(char *string, float numero){
    float dolar = 0.0;
    float euro = 0.0;
    float libra = 0.0;

    if ( strcmp (string, "dolar") == 0){
        return numero = numero / 4.98;
    }else if ( strcmp (string, "euro") == 0){
        return numero = numero / 5.41;
    }else{
        return numero = numero / 6.32;
    }
}
