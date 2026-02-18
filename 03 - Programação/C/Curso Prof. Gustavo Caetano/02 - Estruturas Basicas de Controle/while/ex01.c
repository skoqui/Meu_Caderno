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
  int moedas = 0, rodadas = 0;
  int soma = 0;

  while (moedas < 100) {
    printf("Digite a quantidade de moedas coletadas na rodada: ");
    scanf("%d", &moedas);
    soma += moedas;
    rodadas++;
  }

  printf("Foram necessarias %d rodadas para coletar 100 moedas.\n", rodadas);

  return 0;
}