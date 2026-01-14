#include <stdio.h>

int main() {
  int opcao = 1;

  switch (opcao) {
    case 1:
      printf("Fase número 1\n");
      break;
    case 2:
      printf("Fase número 2\n");
      break;
    case 3:
      printf("Fase número 3\n");
      break;
    case 4:
      printf("Fase número 4\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}