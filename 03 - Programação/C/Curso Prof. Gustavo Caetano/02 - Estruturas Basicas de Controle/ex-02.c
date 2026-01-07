/*
2 - Média de Gols por Partida

Escreva um programa que receba o número total de gols de um jogador e
a quantidade de partidas jogadas.
Depois, calcule e exiba a média de gols por partida.
*/

#include <stdio.h>

int main() {
  int gols, partidas;
  float media;

  printf("Digite o número de gols: ");
  scanf("%d", &gols);

  printf("Digite a quantidade de partidas: ");
  scanf("%d", &partidas);

  media = (float)gols / partidas;

  printf("Média de gols por partida: %.2f\n", media);

  return 0;
}