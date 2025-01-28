#include <stdio.h>

int main()
{
  int num;

  // solicitando valor de entrada
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  // efetuando processamento
  for (int i = 1; i <= 10; i++) {
    printf("%d X %d = %d\n", num, i, num*i);
  }

  return 0;
}
