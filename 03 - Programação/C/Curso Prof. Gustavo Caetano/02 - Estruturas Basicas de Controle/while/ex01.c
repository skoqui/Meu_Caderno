/*
Um jogador precisa coletar moedas em um jogo.
A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas.
O jogo só termina quando o jogador acumula pelo menos 100 moedas.
Escreva um programa em C que solicite ao usuário, repetidamente, a
quantidade de moedas coletadas por rodada, até que o total acumulado atinja
ou ultrapasse 100 moedas.
Ao final, exiba quantas rodadas foram necessárias para atingir a meta.
*/

#include <stdio.h>

int main() {
  int moedas = 0;
  int rodadas = 0;
  int total = 0;

  while (total < 100) {
    printf("Quantidade de moedas coletadas: ");
    scanf("%d", &moedas);
    total += moedas;
    rodadas++;
  }

  printf("Quantidade de rodadas: %d\n", rodadas);
  printf("Total de moedas coletadas: %d\n", total);

  return 0;
}