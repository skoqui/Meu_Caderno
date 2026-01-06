#include <stdio.h>

int main() {
  int numero;

  printf("Digite um número inteiro: ");
  scanf("%d", &numero);  // & significa que ficará ancorado na memoria
                         // scanf → leitura de dados

  printf("O número digitado foi: %d\n", numero);

  return 0;
}