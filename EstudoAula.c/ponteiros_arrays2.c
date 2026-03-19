#include <stdio.h>
int main(){

    int v[5] = {1, 2, 3, 4, 5};
    int *p = v;
    //Em variáveis a gente precisa do & comercial para ler o endereço, mas como a gente tá usando vetor o próprio v serve como endereço
    //Em índice a gente pode começar o for a partir do 0, aqui, em ponteiros, a gente precisa igualar p = v (ponteiro = vetor) para coemçar pelo índice 0, em PONTEIRO.

    for (p = v; p < v + 5; p++){
        printf("[%p] \n", p);
    }

//Se a gente colocar o * com o p vai sair algo como 00000001 para registrar 1, é a mesma coisa, a única coisa que faz ficar nesse formato é a forma que estamos usando para ler ele, que é no formato ponteiro! %p! se colocar %d já printa 1 direitinho. Agora, se coolocar sem o * e com %p mesmo ele vai imprimir tudo em hexadecimal justamente por ser os endereços dos elementos,

    return 0;
}