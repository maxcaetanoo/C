#include <stdio.h>

int main()
{
  int num;

  printf("Digite um número inteiro: \n");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("%d é par.\n", num);
  } else {
    printf("%d é ímpar.\n", num);
  }

  return 0;
}
