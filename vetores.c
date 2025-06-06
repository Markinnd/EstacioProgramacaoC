#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    // 1. Representar o Tabuleiro:
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializar o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // 2. Posicionar os Navios:

    // Navio Horizontal
    // Coordenadas iniciais: linha 2, coluna 3
    // Ocupará as posições (2,3), (2,4), (2,5)
    int linha_navio_h = 2;
    int coluna_navio_h = 3;

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_h][coluna_navio_h + i] = NAVIO;
    }

    // Navio Vertical
    // Coordenadas iniciais: linha 5, coluna 1
    // Ocupará as posições (5,1), (6,1), (7,1)
    int linha_navio_v = 5;
    int coluna_navio_v = 1;

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_v + i][coluna_navio_v] = NAVIO;
    }

    // 3. Exibir o Tabuleiro:
    printf("Tabuleiro de Batalha Naval:\n");
    printf("---------------------------\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }
    printf("---------------------------\n");

    return 0;
}