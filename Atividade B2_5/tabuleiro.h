#ifndef TABULEIRO_H
#define TABULEIRO_H
void tabuleiro(char (*matriz)[8][8][3], char (*coluna)[8][3]) {
  char brancas[] = {'T', 'C', 'B', 'D', 'R', 'B', 'C', 'T'};
  char pretas[] = {'t', 'c', 'b', 'd', 'r', 'b', 'c', 't'};
  char letras[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

  // Preencher espaço vazio com espaços
  for (int i = 2; i < 6; i++) {
    for (int j = 0; j < 8; j++) {
      (*matriz)[i][j][0] = ' ';
      (*matriz)[i][j][1] = ' ';
      (*matriz)[i][j][2] = ' ';
    }
  }

  // Preencher as peças brancas e pretas
  for (int j = 0; j < 8; j++) {
    (*matriz)[7][j][0] = brancas[j];
    (*matriz)[7][j][1] = 'B';
    (*matriz)[7][j][2] = '0'+ (j+1);

    (*matriz)[0][j][0] = pretas[j];
    (*matriz)[0][j][1] = 'p';
    (*matriz)[0][j][2] = '0'+ (j+1);
  }

  // Preencher segunda linha com peão preto e sexta linha com peão branco
  for (int j = 0; j < 8; j++) {
    (*matriz)[1][j][0] = 'p';
    (*matriz)[1][j][1] = 'p';
    (*matriz)[1][j][2] = '0'+ (j+1);

    (*matriz)[6][j][0] = 'P';
    (*matriz)[6][j][1] = 'B';
    (*matriz)[6][j][2] = '0'+ (j+1);
  }

  // Demonstrar coluna
  for (int j = 0; j < 8; j++) {
    (*coluna)[j][0] = '-';
    (*coluna)[j][1] = letras[j];
    (*coluna)[j][2] = '-';
  }
}
#endif