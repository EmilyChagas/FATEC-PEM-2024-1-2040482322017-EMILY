//Atividade B2_5 - Refatorando para Modularizar Codigo
//Emily Chagas
// 2° ADS Vespertino

#include <stdio.h>
#include <stdlib.h>

//Model
#include "tabuleiro.h"
#include "xeque-pastor.h"
#include "Imprimir.h"

//View
#include "menu.h"


//Controller
int main() {
  int op;

  // Alocar memória para as variáveis matriz e coluna
  char (*matriz)[8][8][3] = malloc(8 * sizeof(char[8][8][3]));
  char (*coluna)[8][3] = malloc(8 * sizeof(char[8][3]));

  while (1) {
    menu(&op);

    switch (op) {
      case 1:
        tabuleiro(matriz,coluna);
        imprimir(matriz, coluna);
        break;
      case 2:
        tabuleiro(matriz,coluna);
        imprimir(matriz,coluna);
        Jogada(matriz, coluna);
        break;
      case 3:
        printf("Saindo do jogo...\n");
        free(matriz);
        free(coluna);
        return 0;
      default:
        printf("Opção inválida. Por favor, tente novamente.\n");
        break;
    }
  }

  return 0;
}