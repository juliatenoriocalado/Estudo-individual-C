#include <stdio.h>

int comprimento(char *string);

int main(){

    char string[100];
    scanf("%s", string);

    int resultado = comprimento(string);
    printf("%d", resultado);

    return 0;
}

int comprimento(char *string){
    int contador = 0;
    while (*string != '\0'){
        contador++;
        string++;
    }

    return contador;
}