/*
6 - Verificação de Cartão Vermelho

Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo.
Escreva um programa que verifica se um jogador
será expulso, baseado na quantidade de cartões amarelos.
*/

#include <stdio.h>

int main() {
  int cartoesAmarelos = 0;

  printf("Digite a quantidade de cartões amarelos: ");
  scanf("%d", &cartoesAmarelos);

  if (cartoesAmarelos >= 2) {
    printf("O jogador foi expulso!\n");
  } else {
    printf("O jogador ainda pode jogar. Se ele receber mais");
  }

  return 0;
}