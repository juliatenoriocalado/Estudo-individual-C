#include <stdio.h>

int extrai_digitos(char *origem, char *destino);

int main(){

    char origem[20];
    char destino[20];
    scanf("%s", origem);

    int resultado = extrai_digitos(origem, destino);
    printf("%d\n", resultado);

    printf("%s\n", destino);

    return 0;
}

int extrai_digitos(char *origem, char *destino){
    int contador = 0;
    while (*origem != '\0'){
        if (*origem >= '0' && *origem <= '9'){
            *destino = *origem;
            contador++;
            destino++;
        }
        origem++;
    }
    *destino = '\0';
    return contador;
}