// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

// ======================================
// TORRE → Recursividade
// Movimento: 5 casas à direita
// ======================================
void movimentarTorre(int casas){

    if(casas == 0){
        return;
    }

    movimentarTorre(casas - 1);

    printf("Casa %d: Direita\n", casas);
}

// ======================================
// BISPO → Recursividade + Loops Aninhados
// Movimento: 5 casas diagonal
// (Cima + Direita)
// ======================================
void movimentarBispo(int casas){

    if(casas == 0){
        return;
    }

    movimentarBispo(casas - 1);

    printf("Casa %d:\n", casas);

    // Loop externo → Vertical
    for(int vertical = 1; vertical <= 1; vertical++){

        // Loop interno → Horizontal
        for(int horizontal = 1; horizontal <= 1; horizontal++){
            printf("Cima, Direita\n");
        }
    }
}

// ======================================
// RAINHA → Recursividade
// Movimento: 8 casas à esquerda
// ======================================
void movimentarRainha(int casas){

    if(casas == 0){
        return;
    }

    movimentarRainha(casas - 1);

    printf("Casa %d: Esquerda\n", casas);
}

int main(){

    // =========================
    // TORRE
    // =========================
    int movimento_torre = 5;

    printf("=== Movimento da Torre ===\n");
    movimentarTorre(movimento_torre);

    // =========================
    // BISPO
    // =========================
    int movimento_bispo = 5;

    printf("\n=== Movimento do Bispo ===\n");
    movimentarBispo(movimento_bispo);

    // =========================
    // RAINHA
    // =========================
    int movimento_rainha = 8;

    printf("\n=== Movimento da Rainha ===\n");
    movimentarRainha(movimento_rainha);

    // =========================
    // CAVALO → Loops Complexos
    // Movimento: 2 Cima + 1 Direita
    // =========================
    printf("\n=== Movimento do Cavalo ===\n");

    for(int etapa = 1; etapa <= 2; etapa++){

        if(etapa == 1){

            int cima = 1;

            while(cima <= 2){
                printf("Cima\n");
                cima++;
                continue;
            }
        }

        if(etapa == 2){
            printf("Direita\n");
            break;
        }
    }

    return 0;
}
