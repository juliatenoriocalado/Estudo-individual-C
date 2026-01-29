#include <stdio.h>
#include <string.h>
#define TabelaDeExercicios 8

struct Exercicio{

    char nome[50];
    int grupomuscular;
    int nivel;
    int estilo;
    int genero;

}; //Struch padrão precisa de ; no final

struct Exercicio Exercicios [TabelaDeExercicios] = {
    {"Agachamento Livre", }
}

void ColetaDeDados(){

    char nome[50];
    int EstiloDeTreino, VolumeSemanal; //Estilo de treino: realizado em casa ou na academia 
    int Nivel, Genero;
    int GrupoMuscular;
    int VolumeTreino;
    int QuantidadeDeExercicios;

    printf("Para montarmos o treino ideal, precisa-se de algumas informações básicas, vamos começar? :)\n");

    printf("Responda objetivamente:\n");
    printf("Como devemos te chamar?\n");
    getchar();
    fgets(nome, 50, stdin);

    //Scanf não serve para string, então usamos fgets, onde colocamos o nome da variável, o tamanho e o padrão de leitura (teclado = stdin). 
    //Lê a string até o ENTER

    printf("Você deseja montar um treino caseiro ou que possa ser executado na academia?\n");
    printf("|1| - Caseiro\n");
    printf("|2| - Academia\n");
    printf("Opção: \n");
    scanf("%d", &EstiloDeTreino);

    printf("Você deseja praticar quantas vezes por semana?\n");
    printf("[De 1 a 2x por semana]\n");
    printf("[De 3 a 4x por semana]\n");
    printf("[De 4 a 5x por semana]\n");
    printf("[De 5 a 6x por semana]\n");
    printf("Opção: \n");
    scanf("%d", &VolumeSemanal);

    printf("Você se considera: \n");
    printf("|1| - Iniciante, tenho nenhum ou pouco conhecimento sobre treinamento.\n");
    printf("|2| - Intermediário, tenho algum conhecimento sobre treinamento.\n");
    printf("|3| - Avançado, possuo conhecimento e familiaridade com treinamento.\n");
    scanf("%d", &Nivel);

    printf("Você deseja um treino que se enquadre mais como feminino ou masculino?\n");
    printf("|1| - Feminino\n");
    printf("|2| - Masculino\n");
    printf("Opção: \n");
    scanf("%d", &Genero);
    
    printf("Por fim, mas não menos importante...\n");
    printf("Qual estilo de treino você prefere?\n");
    printf("|1| - Low Volume (Mais carga, menos exercícios)\n");
    printf("|2| - High Volume (Menos carga, mais exercícios)\n");
    printf("Opção: \n");
    scanf("%d", &VolumeTreino);

}

void VisualizarTreino();


int main(){

    int opcao;

    printf("\n|| BEM VINDO À CENTRAL DO GERADOR DE TREINO VIA TERMINAL ||\n");
    //O título não deve ficar se repetindo para não dar boas vindas o tempo todo

    do{

        printf("Você gostaria de:\n");
        printf("|1| - Obter uma nova divisão de treino\n");
        printf("|2| - Visualizar seu treino anterior\n");
        printf("|3| - Encerrar o programa\n");
        printf("Opção: \n");
        scanf("%d", &opcao);

        switch (opcao){

            case 1:
                printf("Preparando tudo para gerar um novo treino...\n");
                ColetaDeDados();
                break;
            
            case 2:
                printf("Visualizando treino anterior...\n");
                VisualizarTreino();
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção inválida.\n");


        }

    }while (opcao != 3); //Enquanto o usuário não digitar 3 ele não sai do programa, o programa exige que digite 3 para finalizar corretamente.


    return 0;
}