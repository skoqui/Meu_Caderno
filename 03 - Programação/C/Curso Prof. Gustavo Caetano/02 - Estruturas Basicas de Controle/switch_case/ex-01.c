/*
Exercício 1: Cardápio Interativo
Crie um programa que exiba um menu com 4 opções de lanches:

1 - Hambúrguer
2 - Cachorro-quente
3 - Pizza
4 - Sair

O usuário deve digitar a opção desejada e o
programa deve mostrar uma mensagem correspondente.
Se o usuário digitar 4, o programa deve exibir "Encerrando pedido...".
Se digitar qualquer outro número, mostrar "Opção inválida!".
*/

#include <stdio.h>

int main() {
  int opcao;

  printf("1 - Hambúrguer\n");
  printf("2 - Cachorro-quente\n");
  printf("3 - Pizza\n");
  printf("4 - Sair\n");

  printf("Digite a opção desejada: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Hambúrguer\n");
      break;
    case 2:
      printf("Cachorro-quente\n");
      break;
    case 3:
      printf("Pizza\n");
      break;
    case 4:
      printf("Encerrando pedido...\n");
      break;
    default:
      printf("Opção inválida!\n");
  }

  return 0;
}