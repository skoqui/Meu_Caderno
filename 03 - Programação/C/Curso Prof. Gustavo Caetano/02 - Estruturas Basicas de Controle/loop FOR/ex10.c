#include <stdio.h>

int main() {
  int altura;

  printf("Digite a altura da piramide: ");
  scanf("%d", &altura);

  for (int i = 1; i <= altura; i++) {
    for (int j = 1; j <= altura - i; j++) {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

/* Exemplo de saída:
Digite a altura da piramide: 5
    *
   ***
  *****
 *******
*********
*/
