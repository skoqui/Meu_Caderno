#include <stdio.h>

int main() {
  int num1 = 10, num2 = 2;
  int resultado;

  resultado = num1 + num2;

  printf("Adição: %d + %d = %d\n", num1, num2, resultado);
  printf("Subtração: %d - %d = %d\n", num1, num2, num1 - num2);
  printf("Multiplicação: %d * %d = %d\n", num1, num2, num1 * num2);
  printf("Divisão: %d / %d = %d\n", num1, num2, num1 / num2);
  printf("Modulo(resto): %d %% %d = %d\n", num1, num2, num1 % num2);

  /*
    printf("Adição: %d\n", num1, num2, resultado);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);
    printf("Divisão: %d\n", num1 / num2);
  */
  return 0;
}