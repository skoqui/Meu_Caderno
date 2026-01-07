/*
9 – Classificação do jogador baseada em idade e desempenho

Escreva um programa que solicita ao usuário:
1. A idade do jogador.
2. A quantidade de gols marcados.
3. O programa deve classificar o jogador nas seguintes categorias:

✅ Se tem até 20 anos e fez mais de 10 gols: "Jovem talento promissor!"
✅ Se tem até 20 anos e fez 10 gols ou menos: "Jovem em desenvolvimento."
✅ Se tem mais de 20 anos e fez mais de 15 gols: "Jogador experiente em grande
fase!" ✅ Se tem mais de 20 anos e fez 15 gols ou menos: "Estevão"

*/

#include <stdio.h>

int main() {
  int idade, gols;

  printf("Digite a idade do jogador: ");
  scanf("%d", &idade);

  printf("Digite a quantidade de gols do jogador: ");
  scanf("%d", &gols);

  if (idade <= 20 && gols > 10) {
    printf("Jovem talento promissor!\n");
  } else if (idade <= 20 && gols <= 10) {
    printf("Jovem em desenvolvimento.\n");
  } else if (idade > 20 && gols > 15) {
    printf("Jogador experiente em grande fase!\n");
  } else {
    printf("Estevão.\n");
  }

  return 0;
}