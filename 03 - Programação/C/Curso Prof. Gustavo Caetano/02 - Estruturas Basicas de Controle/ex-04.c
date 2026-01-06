/*
4 - Calculando o Aproveitamento de um Time

Crie um programa que peça o número de vitórias, empates e derrotas de um time.
Depois, calcule o número total de pontos, seguindo a regra:

Vitória = 3 pontos
Empate = 1 ponto
Derrota = 0 pontos
*/

#include <stdio.h>
int main() {
  int vitorias;
  int empates;
  int derrotas;
  int pontos;

  printf("Digite o número de vitórias: ");
  scanf("%d", &vitorias);

  printf("Digite o número de empates: ");
  scanf("%d", &empates);

  printf("Digite o número de derrotas: ");
  scanf("%d", &derrotas);

  pontos = vitorias * 3 + empates;

  printf("O número de pontos do time é: %d\n", pontos);

  return 0;
}