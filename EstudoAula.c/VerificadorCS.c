#include <stdio.h>

int compara_sufixo(char *str, char *sufixo);

int main(){

    char str[50];
    scanf("%s", str);

    char sufixo[50];
    scanf("%s", sufixo);

    int resultado = compara_sufixo(str, sufixo);
    printf("%d", resultado);

    return 0;
}

int compara_sufixo(char *str, char *sufixo){

    char *inicio = sufixo;

    //crie um ponteiro para marcar o início do sufixo (endereço) e que marque o início do sufixo em si (conteúdo)

    while (*str != '\0') str++;
    while (*sufixo != '\0') sufixo++;

    str--;
    sufixo--;

    while (sufixo >= inicio){
        if (*str != *sufixo){
            return 0;
        }
    *str--;
    *sufixo--;
    }
    return 1;
}