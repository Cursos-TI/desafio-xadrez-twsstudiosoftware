#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


   
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
 /* ===============================
       Movimento da TORRE
       Estrutura: for
       Direção: 5 casas para a direita
       =============================== */
       
     /* ===============================
       Função recursiva da TORRE
       Movimento: Direita
    =============================== */
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

/* ===============================
   Função recursiva da RAINHA
   Movimento: Esquerda
   =============================== */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* ===============================
   Função do BISPO
   - Recursividade
   - Loops aninhados
   Loop externo: vertical
   Loop interno: horizontal
   Movimento: Cima + Direita
   =============================== */
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    /* Loop externo controla o movimento vertical */
    for (int vertical = 1; vertical <= 1; vertical++) {

        /* Loop interno controla o movimento horizontal */
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* ===============================
   Função do CAVALO
   Loops complexos aninhados
   Movimento em "L":
   2 casas para cima
   1 casa para a direita
   =============================== */
void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    /* Loop externo controla o eixo vertical */
    for (int v = 1; v <= movimentosVerticais; v++) {

        /* Condição extra apenas para exemplo de controle */
        if (v < 0) {
            continue; // nunca entra, mas demonstra uso
        }

        printf("Cima\n");

        /* Após completar o movimento vertical,
           executa o movimento horizontal */
        if (v == movimentosVerticais) {

            int h = 1;
            while (h <= movimentosHorizontais) {
                printf("Direita\n");

                /* Controle explícito de fluxo */
                if (h == movimentosHorizontais) {
                    break;
                }

                h++;
            }
        }
    }
}

int main() {

    /* Quantidade de casas definidas no código */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}