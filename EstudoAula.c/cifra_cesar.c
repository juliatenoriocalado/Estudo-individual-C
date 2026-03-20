#include <stdio.h>

void cifra_cesar (char *str, int deslocamento);

int main(){

    char str[20];
    scanf("%s", str);

    cifra_cesar(str, 2);
    
    printf("%s", str);

    return 0;
}

void cifra_cesar(char *str, int deslocamento){
    while (*str != '\0'){
        *str = *str + deslocamento;
        str++;
    }
}