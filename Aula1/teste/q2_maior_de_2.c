#include <stdio.h>

int main()
{
  int numero1, numero2, maior;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &numero2);
 
  maior = numero1;

  if (maior <= numero2) {
    maior = numero2;
  }

  printf("O maior número é: %d\n", maior);
}
