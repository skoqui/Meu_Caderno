#include <stdio.h>

int main() {
  int dias;

  printf("Digite quantos dias de treinamentos: ");
  scanf("%d", &dias);

  for (int i = 1; i < dias; i++) {
    printf("Dias de treinamentos: %d\n", i);
  }

  return 0;
}
