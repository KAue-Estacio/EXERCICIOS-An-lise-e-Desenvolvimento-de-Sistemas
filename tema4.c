#include <stdio.h>

int main() {
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10] = {0};
    int centro_cone = 7; // Centro do cone
    int centro_cruz = 5; // Centro da cruz
    int centro_octaedro = 8; // Centro do octaedro


    // Barcos horizontais
    int linhas_horizontais[3] = {3, 3, 3};
    int colunas_horizontais[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++) {
        int linha_barco = linhas_horizontais[i] - 1;
        int coluna_barco = colunas_horizontais[i] - 1;
        tabuleiro[linha_barco][coluna_barco] = 3;
    }

    // Barcos verticais
    int linhas_verticais[3] = {1, 2, 3};
    int colunas_verticais[3] = {5, 5, 5};

    for (int i = 0; i < 3; i++) {
        int linha_barco = linhas_verticais[i] - 1;
        int coluna_barco = colunas_verticais[i] - 1;
        tabuleiro[linha_barco][coluna_barco] = 3;
    }

    // Barcos diagonais
    int linhas_diagonais[2][3] = {
        {7, 8, 9}, // Primeira diagonal
        {3, 4, 5}  // Segunda diagonal
    };
    int colunas_diagonais[2][3] = {
        {1, 2, 3}, // Primeira diagonal
        {1, 2, 3}  // Segunda diagonal
    };

    for (int diag = 0; diag < 2; diag++) {
        for (int i = 0; i < 3; i++) {
            int linha_barco = linhas_diagonais[diag][i] - 1;
            int coluna_barco = colunas_diagonais[diag][i] - 1;
            tabuleiro[linha_barco][coluna_barco] = 3;
        }
    }


     // Cone
     for (int i = 0; i < 10; i++) { // Loop para as linhas
        for (int j = 0; j < 10; j++) { // Loop para as colunas
            if (i < 3 && j >= centro_cone - i && j <= centro_cone + i) {
                tabuleiro[i][j] = 5; // Marca cone com 5
            }
        }
    }

    
   // Cruz
   for (int i = 0; i < 10; i++) { // Loop para as linhas
    for (int j = 0; j < 10; j++) { // Loop para as colunas
         if ((i == centro_cruz && j == centro_cruz) || // Centro do cruz
            (i == centro_cruz - 1 && j == centro_cruz) || // Parte superior
            (i == centro_cruz + 1 && j == centro_cruz) || // Parte inferior
            (i == centro_cruz && j == centro_cruz - 1) || // Parte esquerda
            (i == centro_cruz && j == centro_cruz - 2) || // Parte esquerda
            (i == centro_cruz && j == centro_cruz + 1) || // Parte direita
            (i == centro_cruz && j == centro_cruz + 2)){ // Parte direita
            tabuleiro[i][j] = 5; // Marca cruz com 5

            }
        }
   }

    // Octaedro
    for (int i = 0; i < 10; i++) { // Loop para as linhas
        for (int j = 0; j < 10; j++) { // Loop para as colunas
            if ((i == centro_octaedro && j == centro_octaedro) || // Centro do octaedro
                (i == centro_octaedro - 1 && j == centro_octaedro) || // Parte superior
                (i == centro_octaedro + 1 && j == centro_octaedro) || // Parte inferior
                (i == centro_octaedro && j == centro_octaedro - 1) || // Parte esquerda
                (i == centro_octaedro && j == centro_octaedro + 1)) { // Parte direita
                tabuleiro[i][j] = 5; // Marca octaedro com 5
            }
        }
    }


   
    // Imprime o cabeçalho das colunas
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", coluna[i]);
    }
    printf("\n");

    // Imprime as linhas e o conteúdo do tabuleiro
    for (int i = 0; i < 10; i++) { // Loop externo para as linhas
        printf("%2d ", linha[i]); // Imprime o número da linha
        for (int j = 0; j < 10; j++) { // Loop interno para as colunas
            printf("%d ", tabuleiro[i][j]); // Imprime o valor do tabuleiro
        }
        printf("\n"); // Quebra de linha após cada linha do tabuleiro
    }

    return 0;
}