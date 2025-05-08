#include <stdio.h>

// Exercicio Jogo de Batalha Naval - Novato

int main() {
    // matriz do tabuleiro/Representação do Tabuleiro
    printf(" *** BATALHA NAVAL ***\n");
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10] = {0}; // Inicializa todas as células com 0


    // Adição dos barcos no tabuleiro HORINZONTAL
    int LINHA_barcos[3] = {3, 3, 3}; // Linhas dos barcos
    char COLUNA_barcos[3] = {'D', 'E', 'F'}; // Colunas dos barcos

    for (int i = 0; i < 3; i++) {
       int linha_barco = LINHA_barcos[i] -1 ; //  linha 
       int coluna_barco = COLUNA_barcos[i] - 'A'; // coluna 
        tabuleiro[linha_barco][coluna_barco] = 3; // Marca a posição do barco
    }

    // Adição dos barcos no tabuleiro VERTICAL
    int LINHA_BARCO_VERTICAL[3] = {3, 4, 5}; // Linhas dos barcos
    char COLUNA_BARCO_VERTICAL[3] = {'B', 'B', 'B'}; // Colunas dos barcos

    for (int i = 0; i < 3; i++) {
       int linha_VERTICAL = LINHA_BARCO_VERTICAL[i] -1 ; //  linha 
       int coluna_vertical = COLUNA_BARCO_VERTICAL[i] - 'A'; // coluna 
        tabuleiro[linha_VERTICAL][coluna_vertical] = 3; // Marca a posição do barco
    }

    
    // Imprime o tabuleiro
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {//loop externo
        printf("%d ", linha[i]);
    for (int j = 0; j < 10; j++) { //loop interno
         printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}