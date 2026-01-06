/*
7 – Verificar se um Jogador Pode Jogar

Escreva um programa que solicita ao usuário a idade de um jogador e verifica
se ele pode jogar na categoria Sub-20 (jogadores com 20 anos ou menos).
Se for mais velho, ele deve jogar na categoria profissional.
*/

#include <stdio.h>

int main() {
  int idade;
  char nome[20];

  printf("Digite o nome do jogador: ");
  scanf("%s", nome);

  printf("Digite a idade do jogador: ");
  scanf("%d", &idade);

  if (idade <= 20) {
    printf("O jogador %s pode jogar na categoria Sub-20.\n", nome);
  } else {
    printf("O jogador %s pode jogar na categoria profissional.\n", nome);
  }

  return 0;
}