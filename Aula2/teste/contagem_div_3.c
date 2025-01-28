#include <stdio.h>

int main()
{
  int num;

  // solicitando o valor da variavel num
  printf("Digite um número: ");
  scanf("%d", &num);

  // processamento
  for (int i = 1; i <= num; i++) {
    // se i não for divizivel por 3 então não é multiplo de 3
    if (i % 3 != 0) {
      // se não for o ultimo valor a aparecer tem virgula no fim
      if ( (i + 1) == num && (i + 1) % 3 == 0 || i == num) {
        printf("%d\n", i);
      } else if ( i != num) {
        printf("%d, ", i);
      }
    }
  }
  return 0;
}
