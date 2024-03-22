// ATIVIDADE TABULEIRO
// autor: Emily Victoria da Silva Chagas 
// Turma: ADS 2° semestre Vespertino


#include <stdio.h>

#define PT1B 1
 
char *matriz[8][8]; 
char *PPRETA[] = {"PT1B", "PC1P", "PB1B", "PDP", "PRB", "PB2P", "PC2B", "PT2P"};
char *PBRANCO[] = {"BT1P", "BC1B", "BB1P", "BDB", "BRP", "BB2B", "BC2P", "BT2B"};
/*

a identificação das peças está sendo a primeira letra com a cor da peça, segunda o tipo da peça, 
a terceira com numeração para peças repetidas e o quarto (ou terceiro no caso da dama e do rei) com a cor do local onde está a peça
Ex: PT1B = torre preta 1 na casa branca

a identificação dos peões está com a primeira letra marcando sua cor, a segunda seu local e a terceira sua numeração
Ex: PP1 = peão preto 1 na casa preta

*/
// Função para preencher a primeira linha com peças pretas
void pecapreta()
{
    for (int j = 0; j < 8; j++) {
        matriz[0][j] = PPRETA[j] ;
    }
}

// Função para preencher a primeira linha com peças pretas
void pecabranca()
{
    for (int j = 0; j < 8; j++) {
        matriz[7][j] = PBRANCO[j];
    }
    
}

/// Função para preencher a segunda linha com peões pretos
void peaopreto() {
    for(int j = 0; j < 8; j++) 
    {
        matriz[1][j] = (j % 2 == 0) ? "PP" : "PB"; // Intercale BP e BB
    }
}
 
// Função para preencher a sétima linha com peões brancos
void peaobranco() {
    for(int j = 0; j < 8; j++) 
    {
        matriz[6][j] = (j % 2 == 0) ? "BB" : "BP"; // Intercale BP e BB
    }
}

void imprimir_matriz() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matriz[i][j] == 0) {
                printf(" x  ");
            } 
            else if (i==0 && i==7){
                printf(" %s ", matriz[i][j]);
            }
            else {
                printf(" %s%d ", matriz[i][j], j+1); // O número é j+1, já que estamos usando base 1 para a numeração
            }
        }
        printf("\n");
    }
}



int main() 
{
       // Inicializar a matriz com zero (vazio)
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = 0; // Caractere nulo como espaço vazio
        }
    }
    
    pecapreta(); // Preenche peões brancos na penúltima linha
    pecabranca(); // Preenche peças brancas na ultima linha
    peaopreto();  // Preenche a segunda linha com peões pretos
    peaobranco(); // Preenche a sétima linha com peões brancos
    
    imprimir_matriz(); // Imprimir a matriz

 

    return 0;
}
