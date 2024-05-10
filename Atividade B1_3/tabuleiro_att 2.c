#include <stdio.h>

char *matriz[8][8];
char *PPRETA[] = {"PT1B", "PC1P", "PB1B", "PDP", "PRB", "PB2P", "PC2B", "PT2P"};
char *PBRANCO[] = {"Bt1P", "Bc1B", "Bb1P", "BdB", "BrP", "Bb2B", "Bc2P", "Bt2B"};

// Função para preencher a primeira linha com peças pretas
void pecapreta() {
    for (int j = 0; j < 8; j++) {
        matriz[0][j] = PPRETA[j];
    }
}

// Função para preencher a primeira linha com peças brancas
void pecabranca() {
    for (int j = 0; j < 8; j++) {
        matriz[7][j] = PBRANCO[j];
    }
}

// Função para preencher a segunda linha com peões pretos
void peaopreto() {
    for (int j = 0; j < 8; j++) {
        matriz[1][j] = (j % 2 == 0) ? "PP" : "PB"; // Intercale BP e BB
    }
}

// Função para preencher a sétima linha com peões brancos
void peaobranco() {
    for (int j = 0; j < 8; j++) {
        matriz[6][j] = (j % 2 == 0) ? "BB" : "BP"; // Intercale BP e BB
    }
}

void imprimir_matriz() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matriz[i][j] == 0) {
                if ((i + j) % 2 == 0) {
                    printf(" _ ");
                } else {
                    printf(" x ");
                }
            } else {
                printf(" %s%d ", matriz[i][j], j+1); // Adicionei o índice da linha
            }
        }
        printf("\n"); // Pule para a próxima linha
    }
}

int main() {
    pecapreta();
    pecabranca();
    peaopreto();
    peaobranco();
    imprimir_matriz();
    return 0;
}
