#include <stdio.h>

int main() {
  int numero, tentativas = 0;

  do {
    printf("Digite um numero até 10 para adivinhar: ");
    scanf("%d", &numero);

    tentativas++;

  } while (numero != 5);

  printf("Parabéns, acertou!\n");
  printf("Quantidade de tentativas: %d\n", tentativas);

  return 0;
}