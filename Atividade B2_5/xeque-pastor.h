#include <stdio.h>
#include "tabuleiro.h"
#include "Imprimir.h"


int Jogada(char (*matriz)[8][8][3], char (*coluna)[8][3]) {
  int jogadas;

  do {  
    printf("\nQual jogada deseja verificar? ");
    scanf(" %d", &jogadas);
    switch (jogadas){
      case 1:
    printf("---------------------------------\t\n");
    printf(" \t\t\t JOGADA 1 \t\n");
    printf("---------------------------------\t\n");
    printf("\n");
    printf("\t-     BRANCAS JOGAM E4    -\n");
    for (int j = 0; j < 3; j++) {
      (*matriz)[4][4][j] = (*matriz)[6][4][j];
      (*matriz)[6][4][j] = '.';
    }
    imprimir(matriz, coluna);
    printf("\n");
    printf("---------------------------------\t\n");
    printf("\n");
    printf("\t-     PRETAS JOGAM E5    -\n");
    for (int j = 0; j < 3; j++) {
      (*matriz)[3][4][j] = (*matriz)[1][4][j];
      (*matriz)[1][4][j] = '.';
    }
    imprimir(matriz, coluna);

    break;

      case 2:
        printf("---------------------------------\t\n");
      printf(" \t\t\t JOGADA 2 \t\n");
        printf("---------------------------------\t\n");
      printf("\n");
      printf("\t-     BRANCAS JOGAM BC4    -\n");
      for (int j = 0; j < 3; j++) {
        (*matriz)[4][2][j] = (*matriz)[7][5][j];
        (*matriz)[7][5][j] = '.';
      }
      imprimir(matriz, coluna);
      printf("\n");
      printf("---------------------------------\t\n");
      printf("\n");
      printf("\t-     PRETAS JOGAM CC4    -\n");
      for (int j = 0; j < 3; j++) {
        (*matriz)[2][2][j] = (*matriz)[0][1][j];
        (*matriz)[0][1][j] = '.';
      }
      imprimir(matriz, coluna);

      break;
      case 3:      
      printf("---------------------------------\t\n");
      printf(" \t\t\t JOGADA 3 \t\n");
      printf("---------------------------------\t\n");
      printf("\n");
      printf("\t-     BRANCAS JOGAM DH5    -\n");
      for (int j = 0; j < 3; j++) {
        (*matriz)[3][7][j] = (*matriz)[7][3][j];
        (*matriz)[7][3][j] = '.';
      }
      imprimir(matriz, coluna);
      printf("\n");
      printf("---------------------------------\t\n");
      printf("\n");
      printf("\t-     PRETAS JOGAM CF6    -\n");
      for (int j = 0; j < 3; j++) {
        (*matriz)[2][5][j] = (*matriz)[0][6][j];
        (*matriz)[0][6][j] = '.';
      }
      imprimir(matriz, coluna);

      break;

      case 4:
        printf("---------------------------------\t\n");
      printf(" \t\t\t JOGADA 4 \t\n");
        printf("---------------------------------\t\n");
      printf("\n");
      printf("\t-     BRANCAS JOGAM PF7    -\n");
      for (int j = 0; j < 3; j++) {
        (*matriz)[1][5][j] = ' ';
        (*matriz)[1][5][j] = (*matriz)[3][7][j];
        (*matriz)[3][7][j] = '.';
      }
      imprimir(matriz, coluna);
      printf("\n");
      printf("\t -       XEQUE-MATE      -\n");

      break;
      case 5:
        printf("\nEncerrando Xeque-Pastor...\n");
        return 5;
      default:
        printf("Opção inválida. Por favor, tente novamente.\n");
    }

  } while(jogadas != 5);
    return 0;
}