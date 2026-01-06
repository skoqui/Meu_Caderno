#include <stdio.h>

int main() {
  int numero = 10;
  float numeroQuebrado = 50.49;
  char letra = 'A';
  char nome[8] = "Eduardo";

  printf("Numero: %d\n", numero);                     // %d = int/decimal
  printf("Numero quebrado: %.2f\n", numeroQuebrado);  // %.2f = float
  printf("Letra: %c\n", letra);                       // %c = char
  printf("Nome: %s\n", nome);                         // %s = string

  return 0;
}