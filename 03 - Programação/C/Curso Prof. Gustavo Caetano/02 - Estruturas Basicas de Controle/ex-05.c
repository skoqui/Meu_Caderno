/*
5 - Diferença de Salários entre Jogadores

Peça ao usuário os salários de dois jogadores de futebol e
mostre a diferença entre eles.
*/

#include <math.h>
#include <stdio.h>

int main() {
  float salario1, salario2, diferenca;

  printf("Digite o salário do primeiro jogador: ");
  scanf("%f", &salario1);

  printf("Digite o salário do segundo jogador: ");
  scanf("%f", &salario2);

  diferenca = fabs(salario1 - salario2);  // fabs = (f = float) - valor absoluto

  printf("A diferença entre os salários dos jogadores é: %.2f\n", diferenca);

  return 0;
}