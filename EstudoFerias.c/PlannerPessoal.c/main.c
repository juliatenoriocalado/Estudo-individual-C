#include <stdio.h>

int menu_principal (){

    int opcao_menu;

    printf("\n||MENU PRINCIPAL||\n");
    printf("1 - Adicionar tarefa\n");
    printf("2 - Listar tarefas\n");
    printf("3 - Concluir tarefa\n");
    printf("4 - Remover tarefa\n");
    printf("5 - Ver estatisticas\n");
    printf("6 - Salvar alteracoes e sair\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao_menu);
    getchar();

    return opcao_menu;
}

int PorEnquantoTemos = 0;

struct Tarefas{
    int id;
    char titulo[250];
    int prioridade;
    int concluida; //0 para não concluída e 1 para concluída
};

struct Tarefas Tarefas[100]; //Pega esse formato de struct para ler 100 dele no total, tamanho do planner

void AdicionarTarefas (){

    printf("Título: ");
    scanf(" %[^\n]", Tarefas[PorEnquantoTemos].titulo); //Sem & para char

    printf("ID: ");
    scanf("%d", &Tarefas[PorEnquantoTemos].id); 
    getchar();

    printf("Nível de prioridade: ");
    scanf("%d", &Tarefas[PorEnquantoTemos].prioridade);
    getchar();

    do{
        printf("Status de conclusão:\n");
        printf("[1] Concluída\n");
        printf("[0] Não concluída\n");
        scanf("%d", &Tarefas[PorEnquantoTemos].concluida);
        getchar();

    }while(Tarefas[PorEnquantoTemos].concluida != 0 && Tarefas[PorEnquantoTemos].concluida != 1);

    PorEnquantoTemos++;
}

void SalvarSair (){
    printf("Finalizando...");
}

void ConcluirTarefa(){
    int id;

    printf("Digite o ID da tarefa: ");
    scanf("%d", &id);

    for (int i = 0; i< PorEnquantoTemos; i++){
        if (Tarefas[i].id == id){
            Tarefas[i].concluida = 1;
            printf("Tarefa concluída!");
            return;
        }
    }

    printf("ID não encontrado.");

    }

void ListarTarefas(){

    if (PorEnquantoTemos == 0){
        printf("Por enquanto não temos pendências, que ótimo!\n");
        printf("Pressione ENTER para continuar... ");
        getchar();
        return;
    }

    printf("\n[---------- TO DO! <3 ----------]\n");

    for (int i=0; i< PorEnquantoTemos; i++){
        printf("[%c] %d - %s\n", Tarefas[i].concluida ? 'X' : ' ', Tarefas[i].id, Tarefas[i].titulo);
        //Referência [X] 1 - Nome
    }
    
    printf("\nPressione ENTER para continuar... ");
    getchar();
}

void RemoverTarefa(){

    int id;
    int encontrada = 0;

    printf("Digite o ID da atividade que desejas excluir: \n");
    scanf("%d", &id);

    for (int i = 0; i < PorEnquantoTemos; i++){

        if (id == Tarefas[i].id){

            for (int j = i; j < PorEnquantoTemos - 1; j ++){
                Tarefas[j] = Tarefas[j+1];
            }

            PorEnquantoTemos--;
            encontrada = 1; //Variável de estado, se você encontrou conta 1
            break;

        }
    }

    if (encontrada == 1){
        printf("Atividade excluída com sucesso!\n");
        return;
    }else{
        printf("ID não encontrado.\n");
        return;
    }
}

void Estatisticas(){

    int TarefasFeitas = 0, TarefasPendentes = 0;
    float media;

    for (int i = 0; i < PorEnquantoTemos; i++){

        if (Tarefas[i].concluida == 1){
            TarefasFeitas++;

        }else{
            TarefasPendentes++;
        }
    }

    int total = TarefasFeitas + TarefasPendentes;

    if (total > 0){

        //media = (TarefasFeitas / total) * 100.0; ERRO (INTEIRO/INTEIRO = FLOAT) - forçar antes

        media = (TarefasFeitas * 100.0) / total;
        
        printf("\n----------|| Estatísticas ||----------\n");
        printf("Total de atividades: %d\n", total);
        printf("Concluídas: %d\n", TarefasFeitas);
        printf("Pendentes: %d\n", TarefasPendentes);
        printf("Progresso: %.2f%%\n", media);

    }else{

        printf("[Nenhuma atividade registrada]\n");
        return;
    }

    printf("Pressione ENTER para continuar... ");
    getchar();
}

int main(){

    int opcao;

    do{
        opcao = menu_principal(); 

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
            printf("Opção inválida.");
        }

    }while (opcao != 6);

    return 0;
}