#include <stdio.h>

int main() {
  char operador;
  float a, b;

  // Tratamento de erro de operador
  printf("Digite o operador (+, -, *, /): ");
  scanf(" %c", &operador);
  if (operador != '+' && operador != '-' && operador != '*' &&
      operador != '/') {
    printf("Operador inválido!\n");
    return 0;
  }

  printf("Digite os dois operandos: ");
  scanf("%f %f", &a, &b);

  switch (operador) {
    case '+':
      printf("Resultado: %.2f\n", a + b);
      break;

    case '-':
      printf("Resultado: %.2f\n", a - b);
      break;

    case '*':
      printf("Resultado: %.2f\n", a * b);
      break;

    case '/':
      if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
      } else {
        printf("Erro: Divisão por zero!\n");
      }
      break;

    default:
      printf("Digite um operador válido!\n");
  }

  return 0;
}
