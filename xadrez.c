#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // =========================
    // TORRE → Estrutura FOR
    // Movimento: 5 casas à direita
    // =========================
    int i;

    printf("=== Movimento da Torre ===\n");

    for(i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }


    // =========================
    // BISPO → Estrutura WHILE
    // Movimento: 5 casas na diagonal
    // (Cima + Direita)
    // =========================
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo ===\n");

    while(contadorBispo <= 5) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }


    // =========================
    // RAINHA → Estrutura DO-WHILE
    // Movimento: 8 casas à esquerda
    // =========================
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha ===\n");

    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;

    } while(contadorRainha <= 8);

    return 0;
}

// Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
