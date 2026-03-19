#include <stdio.h>
#include <string.h>

int main(){

    char origem[] = "Julia eh MARAvilhosa"; //Quando eu escrevo assim eu estou indiretamente determinando um tamanho, o código já deduz que esse vetor tem tamanho 19
    int tamanho = strlen(origem);  //strlen é para a quantidade de caracteres MEDIR TAMANHO DE STRINGS
    //sizeof() para medir o tamanho em BYTES

    //Nunca igualar um vetor string a outro, porque em C não funciona. Opte por strcpy(x,y), lembre str de string e cpy de copyar (tenteikkk)

    char destino[50];

    printf("String original: %s\n", origem);
    printf("Quantidade de caracteres: %d\n", tamanho);
    printf("Quantidade total no array (sizeof): %zu bytes\n", sizeof(origem));

    strcpy(destino, origem);
    //strcpy(A, B); A recebe o conteúdo de B
    printf("Copia bem sucedida: %s\n", destino);

    destino[1] = '\0';
    printf("Alteracao feita apos mudar o indice 1 da string para 0: %s\n");

    return 0;
}