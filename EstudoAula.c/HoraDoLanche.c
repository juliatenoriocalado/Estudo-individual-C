#include <stdio.h>
void cardapio(){

    printf("Tabela de Preços:\n");
    printf("1 - Cachorro Quente    - R$ 4.00\n");
    printf("2 - X-Salada           - R$ 4.50\n");
    printf("3 - X-Bacon            - R$ 5.00\n");
    printf("4 - Torrada Simples    - R$ 2.00\n");
    printf("5 - Refrigerante       - R$ 1.50\n");

    return;
}


int main(){

    cardapio();

    int quantidade, escolha;

    scanf("%d", &escolha);
    scanf("%d", &quantidade);

    if (escolha == 1){
        printf("%.2f\n", quantidade * 4.00);
    }else if (escolha == 2){
        printf("%.2f\n", quantidade * 4.50);
    }else if (escolha == 3){
        printf("%.2f\n", quantidade * 5.00);
    }else if (escolha == 4){
        printf("%.2f\n", quantidade * 2.00);
    }else if(escolha == 5){
        printf("%.2f\n", quantidade * 1.50);
    }else{
        printf("Opção inválida");
    }

    return 0;
}