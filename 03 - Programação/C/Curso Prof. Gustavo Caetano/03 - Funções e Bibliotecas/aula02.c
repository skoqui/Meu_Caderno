/*
void mostraMensagem() {
    printf("Ola mundo!\n");
}
*/

#include <stdio.h>

// Função que exibe o menu
void exibirMenu() {
  printf("=== Menu de Opções ===\n");
  printf("1 - Ver saldo\n");
  printf("2 - Fazer deposito\n");
  printf("3 - Fazer saque\n");
  printf("4 - Sair\n");
  printf("======================\n");
}

int main() {
  // Chamada da função
  exibirMenu();

  int opcao;

  while (opcao != 4) {
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("Ver saldo\n");
        break;
      case 2:
        printf("Fazer deposito\n");
        break;
      case 3:
        printf("Fazer saque\n");
        break;
      case 4:
        printf("Sair\n");
        break;
      default:
        printf("Opção inválida!\n");
    }
  }

  return 0;
}