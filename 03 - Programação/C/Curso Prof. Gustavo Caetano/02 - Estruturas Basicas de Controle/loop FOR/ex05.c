/*
5 – Triângulo de Números

Escreva um programa que exiba um triângulo numérico com N linhas, onde cada
linha tem os números de 1 até a posição atual (N).

Exemplo de N = 5:
1
​1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}