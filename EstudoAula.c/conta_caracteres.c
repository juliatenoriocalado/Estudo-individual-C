#include <stdio.h>

void conta_caracteres(char *string, int *vogais, int *consoantes);

int main(){

    char string[50];
    fgets(string, 50, stdin);

    int vogais = 0;
    int consoantes = 0;

    conta_caracteres(string, &vogais, &consoantes);

    printf("Num. de vogais: %d\n", vogais);
    printf("Num. de consoantes: %d\n", consoantes);

    return 0;
}

void conta_caracteres(char *str, int *vogais, int *consoantes){
    while (*str != '\0'){
        if (*str >= 'a' && *str <= 'z'){
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
                (*vogais)++;
            }else{
                (*consoantes)++;
            }

        }
        str++;
    }
}