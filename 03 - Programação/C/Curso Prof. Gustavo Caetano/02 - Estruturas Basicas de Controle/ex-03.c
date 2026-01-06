/*
3 - Conversão de Minutos para Tempo de Jogo

Peça ao usuário para digitar o tempo jogado em minutos.
Depois, converta esse valor para horas e minutos e exiba o resultado.
*/

#include <stdio.h>

int main() {
  int minutos, horas, minutosRestantes;

  printf("Digite o tempo jogado em minutos: ");
  scanf("%d", &minutos);

  horas = minutos / 60;
  minutosRestantes = minutos % 60;

  printf("Horas: %d\n", horas);
  printf("Minutos restantes: %d\n", minutosRestantes);

  return 0;
}