#include <stdio.h>

int main() {
  int senha;

  do {
    printf("Digite a senha: ");
    scanf("%d", &senha);
  } while (senha != 1234);

  printf("Senha correta!\n");

  return 0;
}