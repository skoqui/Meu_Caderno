#include <stdio.h>

int main() {
  int digito;

  printf("Digite um número para saber se é par ou impar: ");
  scanf("%d", &digito);

  if (digito % 2 == 0) {
    printf("%d é par\n", digito);
  } else {
    printf("%d é impar\n", digito);
  }

  return 0;
}