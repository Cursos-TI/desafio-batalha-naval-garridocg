#include <stdio.h>

#define TamanhoTabuleiro 10
#define TamanhoNavio 3


void exibirTabuleiro(int tabuleiro[TamanhoTabuleiro][TamanhoTabuleiro]) {
    for (int i = 0; i < TamanhoTabuleiro; i++) {
        for (int j = 0; j < TamanhoTabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n"); 
    }
}

int main() {
    
    int tabuleiro[TamanhoTabuleiro][TamanhoTabuleiro] = {0};

    
    int linhaHorizontal = 2;
    int colunaHorizontal = 1;

    
    for (int i = 0; i < TamanhoNavio; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3; 
    }

    
    int linhaVertical = 5;
    int colunaVertical = 4;

    
    for (int i = 0; i < TamanhoNavio; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3; 
    }

    
    printf("Tabuleiro de Batalha Naval:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}