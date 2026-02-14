#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
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
       
      int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* ===============================
       Movimento do BISPO
       Estrutura: while
       Direção: 5 casas na diagonal
       (Cima e Direita)
       =============================== */

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /* ===============================
       Movimento da RAINHA
       Estrutura: do-while
       Direção: 8 casas para a esquerda
       =============================== */

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    /* ===============================
       Movimento do CAVALO
       Estruturas: loops aninhados
       - for (obrigatório)
       - while
       Movimento em "L":
       2 casas para baixo
       1 casa para a esquerda
       =============================== */

    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    /* Loop for controla o movimento vertical */
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

        /* Loop while controla o movimento horizontal
           Executa apenas após o último movimento para baixo */
        if (i == casasBaixo) {
            int contadorEsquerda = 1;
            while (contadorEsquerda <= casasEsquerda) {
                printf("Esquerda\n");
                contadorEsquerda++;
            }
        }
    }

    return 0;
}