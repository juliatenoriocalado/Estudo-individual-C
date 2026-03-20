#include <stdio.h>

void paraMaiusculas(char *string);

int main(){

    char string[100];
    fgets(string, 100, stdin);

    paraMaiusculas(string);

    printf("%s", string);

    return 0;
}

void paraMaiusculas(char *string){
    while (*string != '\0'){
        if (*string >= 'a' && *string <= 'z'){
            *string = *string - 32;
        }
        string++;
    }
}