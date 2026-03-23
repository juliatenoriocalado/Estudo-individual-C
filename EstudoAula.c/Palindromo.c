#include <stdio.h>

int palindomo(char *string);

int main(){

    char string[100];
    scanf("%s", string);

    int resultado = palindomo(string);
    //Nao precisa de * na chamada da função porque string já é um ponteiro
    printf("%d", resultado);

    return 0;
}

int palindomo(char *string){

    char *inicio = string;
    char *final = string;

   while (*final != '\0'){
        final++;
   }

   final--;

   while (inicio < final){
        if (*inicio != *final){
            return 0;
        }

        inicio++;
        final--;
   }

   return 1;

}