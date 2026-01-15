#include <stdio.h>
int main (){

    int numero, quantidade, original;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};

    while (1){
        scanf("%d", &numero); 
        original = numero;
        if (numero > 0 && numero < 1000000){
            break;
        }
    }

    printf("%d\n", original);

    for (int i = 0; i < 7; i++){
        quantidade = numero / cedulas[i];
        numero = numero % cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, cedulas[i]);        
    }

    return 0; 
}