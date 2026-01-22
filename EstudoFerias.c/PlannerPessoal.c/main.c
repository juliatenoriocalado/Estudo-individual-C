#include <stdio.h>

int menu_principal (){

    int opcao_menu;

    printf("||MENU PRINCIPAL||");
    printf("1 - Adicionar tarefa");
    printf("2 - Listar tarefas");
    printf("3 - Concluir tarefa");
    printf("4 - Remover tarefa");
    printf("5 - Ver estatísticas");
    printf("6 - Salvar alterações e sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao_menu);

    return opcao_menu;
}

int PorEnquantoTemos = 0;

struct Tarefas {
    char titulo[250];
    int prioridade;
    int concluida;
};

struct Tarefas Tarefa[100]; //Pega esse formato de struct para ler 100 dele no total, tamanho do planner

void AdicionarTarefas (){

    printf("Título: ");
    scanf(" %[^\n]", &Tarefa[PorEnquantoTemos].titulo);

    printf("Nível de prioridade: ");
    scanf(" %[^\n]", &Tarefa[PorEnquantoTemos].prioridade);

    printf("Status de conclusão:");
    printf("[1] Concluída");
    printf("[2] Não concluída");
    scanf(" %[^\n]", &Tarefas[PorEnquantoTemos].concluida);

    PorEnquantoTemos++;
}

void SalvarSair (){
    printf("Finalizando...");
}

int main(){

    int opcao;

    do{
        opcao = menu_principal;

        if (opcao == 1) {
            AdicionarTarefas();
        }
        else if (opcao == 2) {
            ListarTarefas();
        }
        else if (opcao == 3) {
            ConcluirTarefa();
        }
        else if (opcao == 4) {
            RemoverTarefa();
        }
        else if (opcao == 5) {
            Estatisticas();
        }
        else if (opcao == 6) {
            SalvarSair();
        }else{
            printf("Opção inválida.")
        }
    }while (opcao != 6);

    return 0;
}