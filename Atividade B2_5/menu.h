#include <stdio.h>
#include <stdlib.h>

void menu(int *op){
  printf("\n");
  printf("\n - BEM VINDO AO JOGO DE XADREZ -\n");
  printf("Opções:\n");
  printf("1 - Mostrar Tabuleiro\n");
  printf("2 - Xeque-Pastor\n");
  printf("3 - Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d",op);
}