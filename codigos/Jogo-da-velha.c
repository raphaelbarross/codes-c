#include <stdio.h> 

#define TAM 3 

char tabuleiro[TAM][TAM];

void inicializarTabuleiro() {
    for (int i = 0; i < TAM; i++) {              
        for (int j = 0; j < TAM; j++) {         
            tabuleiro[i][j] = ' ';              
        }
    }
}

void mostrarTabuleiro() {
    printf("\n"); 

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAM - 1) printf("|");            
        }
        printf("\n");
        if (i < TAM - 1) printf("---|---|---\n");    
    }

    printf("\n"); 
}

int verificarVitoria(char jogador) {
    // Linhas
    for (int i = 0; i < TAM; i++) {
        if (tabuleiro[i][0] == jogador &&
            tabuleiro[i][1] == jogador &&
            tabuleiro[i][2] == jogador)
            return 1;
    }

    // Colunas
    for (int i = 0; i < TAM; i++) {
        if (tabuleiro[0][i] == jogador &&
            tabuleiro[1][i] == jogador &&
            tabuleiro[2][i] == jogador)
            return 1;
    }

    // Diagonal principal
    if (tabuleiro[0][0] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][2] == jogador)
        return 1;

    // Diagonal secundária
    if (tabuleiro[0][2] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][0] == jogador)
        return 1;

    return 0; 
}

int verificarEmpate() {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    char jogador = 'X';
    int linha, coluna;  

    inicializarTabuleiro(); 

    while (1) { 
        mostrarTabuleiro(); 

        printf("Jogador %c, digite linha (0-2) e coluna (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha >= 0 && linha < TAM &&
            coluna >= 0 && coluna < TAM &&
            tabuleiro[linha][coluna] == ' ') {

            tabuleiro[linha][coluna] = jogador;

            if (verificarVitoria(jogador)) {
                mostrarTabuleiro();
                printf("Jogador %c venceu!\n", jogador);
                break; 
            }

            if (verificarEmpate()) {
                mostrarTabuleiro();
                printf("Empate!\n");
                break; 
            }

            // Troca jogador
            jogador = (jogador == 'X') ? 'O' : 'X';

        } else {
            printf("Jogada inválida. Tente novamente.\n");
        }
    }

    return 0; 
}
