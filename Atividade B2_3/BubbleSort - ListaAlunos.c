// ATIVIDADE B2_3 - STRUCT - BUBBLE SORT
// Emily Chagas
// ADS 2° Semestre - Vespertino

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  char aluno[50];
  double nota;
} Lista;

Lista listarAluno(char nome[], double nota) {
  Lista func;
  strcpy(func.aluno, nome);
  func.nota = nota;
  return func;
}

int comprimentoNome(Lista alunos[], int maxALUNO) {
  int max = 0;
  for (int i = 0; i < maxALUNO; i++) {
    int min = strlen(alunos[i].aluno);
    if (min > max) {
      max = min;
    }
  }
  return max;
}

void ordenarAluno(Lista alunos[], int maxALUNO) {
  int i, j;
  for (i = 0; i < maxALUNO - 1; i++) {
    for (j = 0; j < maxALUNO - i - 1; j++) {
      if (strcmp(alunos[j].aluno, alunos[j + 1].aluno) > 0) {
        Lista aux = alunos[j];
        alunos[j] = alunos[j + 1];
        alunos[j + 1] = aux;
      }
    }
  }
}

void imprimirLista(Lista alunos[], int maxALUNO) {
  int tamanho = comprimentoNome(alunos, maxALUNO);
  printf("\nNOME");
  for (int i = 5; i < tamanho; i++) { 
    printf(" ");
  }
  printf("\tNOTA\tSITUAÇÂO\n");

  for (int i = 0; i < maxALUNO; i++) {
    printf("%-*s\t%.2f\t%s\n", tamanho, alunos[i].aluno, alunos[i].nota, (alunos[i].nota >= 6) ? "APROVADO" : "REPROVADO");
  }
}


int main() {
  int opcao, maxALUNO = 0;
  Lista alunos[50] = {0}; 
  printf("* LISTA DE ALUNOS *\n");

  do {
    printf("\nOpções:\n");
    printf("1. Incluir Aluno\n");
    printf("2. Listar Alunos\n");
    printf("3. Sair\n");
    printf("Qual opção deseja? ");
    scanf("%d", &opcao);

    if (opcao == 1) {
      if (maxALUNO < 50) {
        char nome[50];
        double nota;

        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]s", nome); 

        printf("Digite a nota do aluno: ");
        scanf("%lf", &nota);

        alunos[maxALUNO] = listarAluno(nome, nota); 
        maxALUNO++;

        printf("\nCadastro realizado com sucesso!\n");
      } else {
        printf("Lista cheia!\n");
      }
    } else if (opcao == 2) {
      ordenarAluno(alunos, maxALUNO);
      imprimirLista(alunos, maxALUNO);
    }
  } while (opcao != 3);
  printf("\nLista Fechada");
  return 0;
}