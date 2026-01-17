#include <stdio.h>
int main(){
    
    int NumVertices, ponto1, ponto2, opcao;

    printf("");
    scanf("%d", &NumVertices);

    printf("");
    scanf("%d, %d", &pontoA, &pontoB);

    for (i=1; i<= NumVertices; i++){

        while true{
            printf("Para o vértice %d:\n", i);
            printf("Mover para o ponto médio entre o polígono e A: [1]");
            printf("Mover para o ponto médio entre o polígono e B: [2]");
            scanf("%d", &opcao);
            (opcao != 2 || opcao !=1);
            continue;
        }else{
            break;
        }
        
    }

    //Muito difícil, pulei POR ENQUANTO.
    return 0;
}