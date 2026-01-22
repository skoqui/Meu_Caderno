/*
2 – Soma dos Números de 1 a n
O usuário digita um número n, e o programa calcula a soma de todos os números de
1 até n.

Exemplo:
Saída esperada (se o usuário digitar 5):
    A soma de 1 ate 5 e: 15
    (Cálculo: 1 + 2 + 3 + 4 + 5 = 15)
*/

#include <stdio.h>

int main() {
  int n, soma = 0;

  printf("Digite um número para saber a soma de 1 a ele: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    soma += i;
  }

  printf("A soma de 1 ate %d e: %d\n", n, soma);

  return 0;
}