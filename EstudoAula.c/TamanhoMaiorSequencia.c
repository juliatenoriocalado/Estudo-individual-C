/*
Enunciado
Nesta atividade você irá praticar ponteiros em C, funções e vetores (arrays).

Implemente a função chamada tamanho_maior_sequencia_crescente

O que a função deve fazer
A função recebe:

vetor: ponteiro para o primeiro elemento do vetor de inteiros.
N: quantidade de elementos do vetor.
saida: ponteiro para um vetor de inteiros onde você deverá escrever a resposta.
Para cada posição 
i
i (
0
≤
i
<
N
0≤i<N), armazene em saida[i] o tamanho da sequência estritamente crescente que começa em vetor[i] e segue para a direita, usando apenas elementos consecutivos:

A sequência é estritamente crescente quando, para cada par consecutivo da sequência, o próximo elemento é maior que o anterior.
A sequência iniciada em 
i
i termina quando:
chega ao final do vetor, ou
encontra um índice 
j
j tal que vetor[j+1] <= vetor[j].
Se não houver sucessor imediatamente maior (ou seja, se 
i
=
N
−
1
i=N−1 ou vetor[i+1] <= vetor[i]), então saida[i] = 1.
Além de preencher saida, a função deve retornar o endereço (ponteiro) da primeira posição de saida que contém o maior valor armazenado em saida.

Se o maior valor aparecer mais de uma vez, retorne a primeira ocorrência (menor índice).
Se N == 0, não há posições válidas para preencher, mas a função ainda deve retornar &saida[0].
Exemplo
Se:

N = 7
vetor = 3 5 7 2 4 6 1
Então saida deve ser:

3 2 1 3 2 1 1

O maior valor em saida é 3, e sua primeira ocorrência é em saida[0], então a função retorna &saida[0].

main() (obrigatória)
Implemente uma main() que:

Leia N e o vetor vetor da entrada padrão.
Crie um vetor saida.
Chame tamanho_maior_sequencia_crescente(vetor, N, saida) e armazene o ponteiro retornado (não é necessário imprimir o endereço).
Imprima saida[0..N-1] em uma linha, separado por espaços.
Observações de implementação
O retorno deve ser um ponteiro para dentro do array saida (ou &saida[0] quando N == 0).
Entrada
Entrada em duas linhas:

Um inteiro N (
0
≤
N
≤
200000
0≤N≤200000)
N inteiros do vetor (se N == 0, a segunda linha pode estar ausente)
Saída
Imprima uma única linha:

Se N > 0: N inteiros saida[0] ... saida[N-1], separados por um espaço.
Se N == 0: imprima apenas uma linha em branco (\n).
Restrições
0 <= N <= 200000
Casos de Teste Visíveis
Exemplo 1
Entrada
7
3 5 7 2 4 6 1
Saída
3 2 1 3 2 1 1
Exemplo 2
Entrada
5
5 4 3 2 1
Saída
1 1 1 1 1
Dicas (0/4)
As dicas são liberadas uma por vez. Cada visualização é registrada.

Clique em "Mostrar próxima dica" para revelar a primeira dica.

Mostrar próxima dica
Solução e explicação
Disponível para revelação mediante confirmação.

Clique em revelar para ver a solução oficial e a explicação.

Revelar solução e explicação
*/

#include <stdio.h>

int* tamanho_maior_sequencia_crescente(int *vetor, int N, int *saida);

int main(){

    int N;
    scanf("%d", &N);

    int vetor[N];

    for (int i=0; i<N; i++){
        scanf("%d", &vetor[i]);
    }

    int saida[N];

    tamanho_maior_sequencia_crescente(vetor, N, saida);

    for (int i=0; i<N; i++){
        printf("%d ", saida[i]);
    }

    return 0;
}

int* tamanho_maior_sequencia_crescente(int *vetor, int N, int *saida){
    for (int i=0; i<N; i++){
        int contador = 1;
        for (int j=i; j<N-1; j++){
            if (vetor[j+1] > vetor[j]){
                contador++;
            }else{
                break;
            }
            }
            saida[i] = contador;
        }
        return saida;
    }