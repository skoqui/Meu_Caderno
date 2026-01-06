/*
​1 - Apresentação do Jogador

Crie um programa que peça o primeiro nome de um jogador,
a sua idade e a quantidade de gols que ele já fez na carreira.
Em seguida, exiba essas informações na tela.
*/

#include <stdio.h>

int main() {
  char nome[20];
  int idade;
  int gols;

  printf("Digite o nome do jogador: ");
  scanf("%s",
        nome);  // & não foi preciso porque "nome" já é um ponteiro (char *)

  printf("Digite a idade do jogador: ");
  scanf("%d", &idade);

  printf("Digite a quantidade de gols do jogador: ");
  scanf("%d", &gols);

  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Gols: %d\n", gols);

  return 0;
}