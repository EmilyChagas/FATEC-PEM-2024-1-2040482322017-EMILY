#ifndef IMPRIMIR_H
#define IMPRIMIR_H

#include <stdio.h>
#include <stdlib.h>
#include "tabuleiro.h"

int imprimir(char (*matriz)[8][8][3], char (*coluna)[8][3]) {
  // Imprimir o estado atual do tabuleiro
  printf(". ");
  for (int j = 0; j < 8; j++) {
    printf("%c%c%c ", (*coluna)[j][0], (*coluna)[j][1], (*coluna)[j][2]);
  }
  printf("\n");

  for (int i = 0; i < 8; i++) {
    printf("%d ", 8 - i);
    for (int j = 0; j < 8; j++) {
      printf("%c%c%c ", (*matriz)[i][j][0], (*matriz)[i][j][1], (*matriz)[i][j][2]);
    }
    printf("\n");
  }
  return 0;
}

#endif