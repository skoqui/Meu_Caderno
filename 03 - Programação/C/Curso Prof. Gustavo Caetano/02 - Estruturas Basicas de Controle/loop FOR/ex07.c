/*
7 – Pirâmide de Números Pares

Escreva um programa que exiba uma pirâmide de números pares com N linhas.
Exemplo de saída se N for 10:

2
4 6
8 10 12
14 16 18 20
22 24 26 28 30
32 34 36 38 40 42
44 46 48 50 52 54 56
58 60 62 64 66 68 70 72
74 76 78 80 82 84 86 88 90
​92 94 96 98 100 102 104 106 108 110
*/

#include <stdio.h>

int main() {
  int n;
  int num = 2;

  printf("Digite um numero:\n");
  scanf("%d", &n);
  printf("\n");

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", num);
      num += 2;
    }
    printf("\n");
  }

  return 0;
}
