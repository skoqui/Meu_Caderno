#include <stdio.h>

int main() {
  printf("Contagem regressiva para a bomba explodir:\n");

  for (int i = 10; i >= 1; i--) {
    printf("%d...\n", i);
  }

  printf("## Bomm! ##\n");
  return 0;
}