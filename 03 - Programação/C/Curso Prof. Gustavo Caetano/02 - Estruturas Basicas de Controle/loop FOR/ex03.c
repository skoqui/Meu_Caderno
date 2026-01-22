/*
3 – Tabuada

Escreva um programa que recebe um número inteiro do usuário e imprime a tabuada
desse número de 0 a 10.

Exemplo de saída se o usuário digitar 5:
5 x 0 = 0​
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 5

*/

#include <stdio.h>

int main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  for (int i = 0; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  }
  return 0;
}