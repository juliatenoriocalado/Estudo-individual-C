#include <stdio.h>

void GeradorDeTreino(){

    char nome;
    int ModoDeTreino, VolumeSemanal;
    int nivel, genero;

    printf("Para montarmos o treino ideal, precisa-se de algumas informações básicas, vamos começar? :)\n");

    printf("Responda objetivamente:\n");
    printf("Como devemos te chamar?\n");
    fgets(nome, 50, stdin); 
    
    //Scanf não serve para string, então usamos fgets, onde colocamos o nome da variável, o tamanho e o padrão de leitura (teclado = stdin). 
    //Lê a string até o ENTER

    printf("Você deseja montar um treino caseiro ou que possa ser executado na academia?\n");
    printf("|1| - Caseiro\n");
    printf("|2| - Academia\n");
    printf("Opção: \n");
    scanf("%d", &ModoDeTreino);

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
    scanf("%d", &nivel);

    printf("Você deseja um treino que se enquadre mais como feminino ou masculino?\n");
    printf("|1| - Feminino\n");
    printf("|2| - Masculino\n");
    printf("Opção: \n");
    scanf("%d", &genero);
    
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
                GeradorDeTreino();
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