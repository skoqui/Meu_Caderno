#include <stdio.h>

int parImpar(int numero) {
  if (numero % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);

  if (parImpar(numero)) {
    printf("O numero %d é par\n", numero);
  } else {
    printf("O numero %d é impar\n", numero);
  }

  return 0;
}
