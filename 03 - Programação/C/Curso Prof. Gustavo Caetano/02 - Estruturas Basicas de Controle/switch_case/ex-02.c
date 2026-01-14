/*
Exercício 2: Verificação de Nota e Frequência para Aprovação​

Você foi contratado para fazer um sistema simples de avaliação escolar.
O programa deve apresentar o seguinte menu:

1 - Verificar se o aluno foi aprovado
2 - Sair

​Se o usuário escolher a opção 1, o programa deve solicitar a nota final
(de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).


O aluno só será aprovado se a nota for maior ou igual a 7
e a frequência for maior ou igual a 75%.
Use if else para essa verificação dentro do case 1.


Se o usuário escolher a opção 2, o programa deve encerrar.
Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!".
*/

#include <stdio.h>

int main() {
  int opcao;
  float nota, frequencia;

  printf("1 - Verificar se o aluno foi aprovado\n");
  printf("2 - Sair\n");

  printf("Digite a opção desejada: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1: {
      printf("Digite a nota final (0 a 10): ");
      scanf("%f", &nota);

      if (nota < 0 || nota > 10) {
        printf("Nota inválida!\n");
        break;
      }

      printf("Digite a frequência (0 a 100): ");
      scanf("%f", &frequencia);

      if (frequencia < 0 || frequencia > 100) {
        printf("Frequência inválida!\n");
        break;
      }

      if (nota >= 7 && frequencia >= 75) {
        printf("Aluno aprovado!\n");
      } else {
        printf("Aluno reprovado!\n");
      }

      break;
    }

    case 2:
      printf("Encerrando programa...\n");
      break;

    default:
      printf("Opção inválida!\n");
      break;
  }

  return 0;
}
