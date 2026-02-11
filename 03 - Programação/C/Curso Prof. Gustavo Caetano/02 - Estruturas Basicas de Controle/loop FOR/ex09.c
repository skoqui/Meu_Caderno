#include <stdio.h>

int main() {
  int quantidadeCarros;

  printf("Digite a quantidade de carros a serem cadastrados: ");
  scanf("%d", &quantidadeCarros);

  for (int i = 1; i <= quantidadeCarros; i++) {
    char marca[20], modelo[20];
    int ano;
    int reparo = 0;

    printf("Carro %d:\n", i);
    printf("Marca: ");
    scanf("%s", marca);
    printf("Modelo: ");
    scanf("%s", modelo);
    printf("Ano: ");
    scanf("%d", &ano);

    if (ano < 2000 && reparo == 0) {
      printf("O carro %s da marca %s PRECISA DE REPAROS!.\n", modelo, marca);
      reparo = 1;
    } else {
      printf("O carro %s da marca %s NÃO precisa de reparos.\n", modelo, marca);
    }
  }

  return 0;
}