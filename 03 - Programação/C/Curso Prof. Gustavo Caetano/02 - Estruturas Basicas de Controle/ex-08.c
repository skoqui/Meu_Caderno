/*
8 – Avaliar o desempenho do jogador

Escreva um programa que pede ao usuário a quantidade de gols marcados por um
jogador em uma temporada e verifica:

Se fez mais de 10 gols, exibir "Excelente temporada!"
Se fez entre 5 e 10 gols (inclusive), exibir "Boa temporada!"
Se fez menos de 5 gols, exibir "Temporada abaixo do esperado."
*/

#include <stdio.h>

int main() {
  int gols;

  printf("Digite a quantidade de gols: ");
  scanf("%d", &gols);

  if (gols >= 10) {
    printf("Excelente temporada!\n");
  } else if (gols >= 5 && gols <= 9) {
    printf("Boa temporada!\n");
  } else {
    printf("Temporada abaixo do esperado.\n");
  }

  return 0;
}