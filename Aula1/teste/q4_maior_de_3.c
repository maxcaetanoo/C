#include <stdio.h>

int main()
{
  int numero1, numero2, numero3, maior, menor;

  printf("Digite um número: ");
  scanf("%d", &numero1);
  
  printf("Digite um número: ");
  scanf("%d", &numero2);
  
  printf("Digite um número: ");
  scanf("%d", &numero3);
 
  maior = menor = numero1;

  if (maior <= numero2) {
    maior = numero2;
  }else if (menor >= numero2) {
    menor = numero2;
  }

  if (maior <= numero3) {
    maior = numero3;
  }else if (menor >= numero3) {
    menor = numero3;
  }

  printf("O maior número é: %d\nO menor numero é: %d\n", maior, menor);
}
