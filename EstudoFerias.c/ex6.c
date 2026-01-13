#include <stdio.h>
int main(){

    int quantidade;
    float maiormedia = 0, menormedia = 0, mediageral = 0, somadasmedias = 0, mediaindividual;

    printf("Qual a quantidade de alunos que teremos para avaliar?: ");
    scanf("%d", &quantidade);
    
    for (int i=1; i<=quantidade; i++){

        float nota1, nota2, nota3;

        printf("Nota 1 [Aluno %d]: ", i);
        scanf("%f", &nota1);

        printf("Nota 2 [Aluno %d]: ", i);
        scanf("%f", &nota2);

        printf("Nota 3 [Aluno %d]: ", i);
        scanf("%f", &nota3);

        mediaindividual = (nota1+nota2+nota3)/3.0;
        somadasmedias += mediaindividual;

        if (i == 1){
            maiormedia = mediaindividual;
            menormedia = mediaindividual;
        }else{
            if (mediaindividual > maiormedia){
                maiormedia = mediaindividual;
            }
            if (mediaindividual < menormedia){
                menormedia = mediaindividual;
            }
        }
        
    }

    mediageral = somadasmedias / quantidade;

    printf("A maior média é: %.2f", maiormedia);
    printf("A menor média é: %.2f", menormedia);
    printf("A média geral é: %.2f", mediageral);

    return 0;
}