//ATIVIDADE B2_1 - IMPLEMENTAR MODULARIZAÇÃO - Calculadora
// Emily Chagas
// 2° ADS Vespertino 


#include <stdio.h>
#include <string.h>

// Função para exibir o resultado
void exibirResultado(float resultado) {
  printf("Resultado: %.2f\n", resultado);
}


// Função para calcular a operação
float calcular(float num1, float num2, char operacao) {
  // Matrizes para operações e resultados
  char operacoes[] = {'+', '-', '*', '/'};
  float resultados[] = {num1 + num2, num1 - num2, num1 * num2, num1 / num2};
 
  // Encontrar o índice da operação na matriz
  int indiceOperacao;
  for (int i = 0; i < sizeof(operacoes); i++) {
    if (operacoes[i] == operacao) {
      indiceOperacao = i;
      break;
    }
  }
 
  // Retornar o resultado da operação
  return resultados[indiceOperacao];
}


int main() {
  float num1, num2;
  char operacao,continuar;
 
   do {
    // Obter os números do usuário
    printf("Digite o primeiro número: ");
    while (scanf("%f", &num1) != 1) {
      printf("Valor inválido. Digite um número válido: ");
   
    }
 
    printf("Digite o segundo número: ");
    while (scanf("%f", &num2) != 1) {
      printf("Valor inválido. Digite um número válido: ");

    }
 
    // Obter a operação do usuário
    printf("Digite a operação (+, -, *, /): ");
    while (scanf(" %c", &operacao) != 1 || strchr("+ -*/", operacao) == NULL) {
      printf("Operação inválida. Digite uma operação válida (+, -, *, /): ");

    }
 
    // Validar a operação de divisão por zero
    if (operacao == '/' && num2 == 0) {
      printf("Erro: Divisão por zero! Digite outro número.\n");
      continue; // Voltar para o loop para obter novos números e operação
    }
 
    // Calcular e exibir o resultado
    float resultado = calcular(num1, num2, operacao);
    exibirResultado(resultado);
 
 // Perguntar se o usuário deseja continuar
    printf("Deseja continuar calculando?(C para continuar) (S para sair): ");
     scanf(" %c", &continuar);
 
  } while (continuar != 'S' && continuar != 's'); // Loop continua enquanto 'continuar' diferente de 'S'
 
  return 0;
}

