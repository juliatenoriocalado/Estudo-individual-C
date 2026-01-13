#include <stdio.h>
int main(){
    
    int NumVertices, ponto1, ponto2, opcao;

    while true{

        printf("Digite o número de vértices do polígono convexo: ");
        scanf("%d", &NumVertices);

        (NumVertices >= 3 and NumVertices <= 100000)
            break;
        }else{
            printf("Número inválido, digite novamente [número entre 3 e 10^5]: ");
        }continue;
    
    printf("Digite dois pontos [vértices] fixos no polígono: ");
    scanf("%d, %d", &ponto1, &ponto2);

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

    return 0;
}