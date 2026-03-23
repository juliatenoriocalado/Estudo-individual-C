#include <stdio.h>

int ehVogal(char c);
int maiorSubstringVogais(int tamanho, char *S);
char* copiar(char *saida, char *S, int inicio, int tamanho);

int main(){

    char S[1000];
    scanf("%s", S);

    char saida[1001];

    // cálculo do tamanho máximo
    int tamanho = 0;
    for (int i = 0; S[i] != '\0'; i++){
        if (ehVogal(S[i])){
            int j = i;
            int cont = 0;

            while (ehVogal(S[j])){
                cont++;
                j++;
            }

            if (cont > tamanho){
                tamanho = cont;
            }
        }
    }

    int contador = 0;
    int inicio = 0;
    int melhorInicio = 0;
    int maior = 0;

    for (int i = 0; S[i] != '\0'; i++){
        if (ehVogal(S[i])){
            if (contador == 0){
                inicio = i;
            }
            contador++;

            if (contador > maior){
                maior = contador;
                melhorInicio = inicio;
            }
        } else {
            contador = 0;
        }
    }

    copiar(saida, S, melhorInicio, tamanho);

    printf("%d\n", tamanho);
    printf("%s\n", saida);

    return 0;
}

int ehVogal(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    }
    return 0;
}

int maiorSubstringVogais(int tamanho, char *S){
    int contador = 0;
    int maior = 0;

    for (int i = 0; i < tamanho; i++){
        if (ehVogal(S[i])){
            contador++;
        } else {
            if (contador > maior){
                maior = contador;
            }
            contador = 0;
        }
    }

    if (contador > maior){
        maior = contador;
    }

    return maior;
}

char* copiar(char *saida, char *S, int inicio, int tamanho){
    int i = 0;

    while (i < tamanho){
        saida[i] = S[inicio + i];
        i++;
    }

    saida[tamanho] = '\0';

    return saida;
}