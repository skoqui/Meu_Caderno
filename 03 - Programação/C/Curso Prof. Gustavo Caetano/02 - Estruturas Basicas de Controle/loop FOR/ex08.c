/*
8 - Controle de estoque de supermercado

O supermercado deseja controlar o estoque de seus produtos
e verificar quais precisam ser reabastecidos. O programa deve:

1 - Pedir ao usuário quantos produtos ele deseja cadastrar.
2 - Para cada produto, solicitar:
    a - Nome do produto
    b - Quantidade em estoque
    c - Estoque minimo recomendado
3 - Exibir imediatamente se o produto precisa de reposição ou nao.

Exemplo:

Digite a quantidade de produtos a serem cadastrados: 3

Produto 1:
Nome: Arroz
Quantidade em estoque: 100
Estoque minimo recomendado: 50
O produto Arroz não precisa de reposicao

Produto 2:
Nome: Feijao
Quantidade em estoque: 50
Estoque minimo recomendado: 60
O produto Feijao precisa de reposicao

Produto 3:
Nome: Leite
Quantidade em estoque: 20
Estoque minimo recomendado: 20
O produto Leite precisa de reposicao
*/

#include <stdio.h>

int main() {
  int n;

  printf("Digite a quantidade de produtos a serem cadastrados: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    char nome[20];
    int estoque, estoqueMin;

    printf("Produto %d:\n", i);
    printf("Nome: ");
    scanf("%s", nome);
    printf("Quantidade em estoque: ");
    scanf("%d", &estoque);
    printf("Estoque minimo recomendado: ");
    scanf("%d", &estoqueMin);

    if (estoque <= estoqueMin) {
      printf("O produto %s precisa de reposicao\n", nome);
    } else {
      printf("O produto %s nao precisa de reposicao\n", nome);
    }
  }

  return 0;
}