#include <stdio.h>

int somar(int numero1, int numero2) { return numero1 + numero2; }

int main() {
  printf("Resultado: %d\n", somar(10, 20));
  printf("Resultado: %d\n", somar(20, 20));
  printf("Resultado: %d\n", somar(30, 20));

  return 0;
}
