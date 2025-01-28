#include <stdio.h>

int main()
{
  int num;

  // solicitando que o número seja digitado para a operação
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  // processamento do valor para identificar o par ou ímpar
  if (num % 2 == 0) {
    printf("O número %d é par.\n", num);
  } else {
    printf("O número %d é ímpar.\n", num);
  }

  return 0;
}
