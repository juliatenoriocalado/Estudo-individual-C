#include <stdio.h>
#include <string.h>

#define QUADRICEPS 1
#define POSTERIORES 2
#define PANTURRILHAS 3
#define BICEPS 4
#define TRICEPS 5
#define PEITO 6
#define DORSAIS 7
#define OMBROS 8
#define ABDOMEN 9
#define GLUTEO 10

#define INICIANTE 1
#define INTERMEDIARIO 2
#define AVANCADO 3
#define PADRAO 4

#define CASEIRO 1
#define ACADEMIA 2
#define FLEXIVEL 3

#define FEMININO 1
#define MASCULINO 2
#define GERAL 3

typedef struct {

    char nome[50];
    int quantidade;
    int nivel;
    int estilo;
    int genero;
    int volume;

}

Usuario; //Struch padrão precisa de ; no final ///Aqui eu estou nomeando meu Struct com um apelido, chamado Usuario
Usuario DadosUsuario; //Aqui eu estou criando uma variável global para armazenar todos os dados que esse Struct vai guardar

typedef struct {

    char Nome[50];
    int GrupoMuscular;
    int Nivel;
    int Estilo;
    int Genero;

}

Exercicio;
Exercicio Exercicios [] = {

    {"Agachamento Livre", INFERIORES, PADRAO, FLEXIVEL, GERAL},
    {"Cadeira Extensora", QUADRICEPS, PADRAO, ACADEMIA, GERAL},
    {"Cadeira Flexora", POSTERIORES, PADRAO, ACADEMIA, GERAL},
    {"Mesa Extensora", POSTERIORES, INTERMEDIARIO, ACADEMIA, GERAL},
    {"Agachamento Hack", INFERIORES, AVANCADO, ACADEMIA, GERAL},
    {"Agachamento Sumô", GLUTEO, PADRAO, FLEXIVEL, FEMININO},
    {"Agachamento Búlgaro", GLUTEO, AVANCADO, FLEXIVEL, FEMININO},
    {"Afundo", INFERIORES, INTERMEDIARIO, FLEXIVEL, GERAL},
    {"Leg Press 45", INFERIORES, INTERMEDIARIO, ACADEMIA, GERAL},
    {"Leg Press Horizontal", INFERIORES, INICIANTE, ACADEMIA, GERAL},
    {"Búlgaro", GLUTEO, AVANCADO, FLEXIVEL, FEMININO},
    {"Avanço", INFERIORES, INICIANTE, FLEXIVEL, GERAL},
    {"Panturrilha Máquina", INTERMEDIARIO, ACADEMIA, GERAL},
    {"Panturrilha em Pé", INICIANTE, FLEXIVEL, GERAL},
    {"Agachamento Sissy", QUADRICEPS, AVANCADO, FLEXIVEL, GERAL},
    {"Elevação Pélvica", GLUTEO, PADRAO, FLEXIVEL, FEMININO},
    {"Cadeira Abdutora", GLUTEO, INICIANTE, ACADEMIA, FEMININO},


    {"Stiff", POSTERIORES, PADRAO, FLEXIVEL, GERAL},
    {"RDL", POSTERIORES, PADRAO, FLEXIVEL, FEMININO},

    {"Supino Reto", PEITO, INICIANTE, ACADEMIA, GERAL},
    {"Supino Inclinado", PEITO, INTERMEDIARIO, ACADEMIA, GERAL},
    {"Flexão de Braço", PEITO INICIANTE, CASEIRO, GERAL},
    {"Crucifixo Máquina", PEITO, INICIANTE, ACADEMIA, GERAL},

    {"Puxada Frontal", DORSAIS, INICIANTE, ACADEMIA, GERAL},
    {"Remada Curvada", DORSAIS, INTERMEDIARIO, ACADEMIA, GERAL},
    {"Remada Unilateral", DORSAIS, INICIANTE, FLEXIVEL, GERAL},
    {"Barra Fixa", DORSAIS, AVANCADO, FLEXIVEL, GERAL},

    {"Desenvolvimento Halteres", OMBROS, INICIANTE, FLEXIVEL, GERAL},
    {"Elevação Lateral", OMBROS, INICIANTE, FLEXIVEL, GERAL},
    {"Elevação Frontal", OMBROS, INICIANTE, FLEXIVEL, GERAL},

    {"Rosca Direta", BICEPS, INICIANTE, FLEXIVEL, GERAL},
    {"Rosca Alternada", BICEPS, INICIANTE, FLEXIVEL, HIGH, GERAL},

    {"Tríceps Corda", TRICEPS, INICIANTE, ACADEMIA, GERAL},
    {"Tríceps Testa", TRICEPS, INTERMEDIARIO, ACADEMIA, GERAL},
    {"Mergulho Banco", TRICEPS, INICIANTE, CASA, GERAL},

    {"Abdominal Infra", ABDOMEN, INICIANTE, FLEXIVEL, GERAL},
    {"Abdômen Máquina", ABDOMEN, INICIANTE, ACADEMIA, GERAL},
    {"Prancha", ABDOMEN, INICIANTE, FLEXIVEL, GERAL}

};

int TotalDeExercicios = sizeof(Exercicios)/sizeof(Exercicios[0]);

void ColetaDeDados(){

    printf("Para montarmos o treino ideal, precisa-se de algumas informações básicas, vamos começar? :)\n");

    printf("Responda objetivamente:\n");
    printf("Como devemos te chamar?\n");
    getchar();
    fgets(DadosUsuario.nome, 50, stdin);

    //Scanf não serve para string, então usamos fgets, onde colocamos o nome da variável, o tamanho e o padrão de leitura (teclado = stdin). 
    //Lê a string até o ENTER

    printf("Você deseja montar um treino caseiro ou que possa ser executado na academia?\n");
    printf("|1| - Caseiro\n");
    printf("|2| - Academia\n");
    printf("Opção: \n");
    scanf("%d", &DadosUsuario.estilo);

    printf("Você deseja praticar quantas vezes por semana?\n");
    printf("[De 1 a 2x por semana]\n");
    printf("[De 3 a 4x por semana]\n");
    printf("[De 4 a 5x por semana]\n");
    printf("[De 5 a 6x por semana]\n");
    printf("Opção: \n");
    scanf("%d", &DadosUsuario.quantidade);

    printf("Você se considera: \n");
    printf("|1| - Iniciante, tenho nenhum ou pouco conhecimento sobre treinamento.\n");
    printf("|2| - Intermediário, tenho algum conhecimento sobre treinamento.\n");
    printf("|3| - Avançado, possuo conhecimento e familiaridade com treinamento.\n");
    scanf("%d", &DadosUsuario.nivel);

    printf("Você deseja um treino que se enquadre mais como feminino ou masculino?\n");
    printf("|1| - Feminino\n");
    printf("|2| - Masculino\n");
    printf("Opção: \n");
    scanf("%d", &DadosUsuario.genero);
    
    printf("Por fim, mas não menos importante...\n");
    printf("Qual estilo de treino você prefere?\n");
    printf("|1| - Low Volume (Mais carga, menos exercícios)\n");
    printf("|2| - High Volume (Menos carga, mais exercícios)\n");
    printf("Opção: \n");
    scanf("%d", &DadosUsuario.volume);

}

void GerarTreino(){

    for (i=0; i<TotalDeExercicios; i++){
        if (DadosUsuario)
    }

}

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