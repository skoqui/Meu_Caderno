/*
Imagine que você está construindo um jogo em que o jogador deve
adivinhar um número secreto entre 1 e 10.
O programa deve continuar pedindo palpites até que o número correto seja
adivinhado. Use DO WHILE para garantir que o jogador tenha ao menos uma
tentativa. O número secreto deve ser 7. Ao acertar, exiba "Você acertou!".
*/

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