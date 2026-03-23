#include <stdio.h>
#include <string.h>

int Primo(int *numero, char *string);

int main(){

    int numero;
    scanf("%d", &numero);

    char string[20];
    scanf("%s", string);

    char convertido[20];

    int resultado = Primo(&numero, string);
    printf("%d", resultado);

    return 0;
}

int Primo(int *numero, char *string){
    for (int i=2; i<=(*numero-1); i++){
        if (*numero % i == 0){
            return 0;
        }
    }

    char convertido[20];
    sprintf(convertido, "%d", *numero);
    strcat (string, convertido);

    return 1;
}