#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("Números pares entre 0 e %d: ", numero);


  for (int i = 0; i <= numero ; i++) {
    if(i == 0 || i % 2 == 0) {
      if (i == numero) {
        printf("%d", i);
      }
      else if (i + 1 == numero) {
        printf("%d", i);
      }
      else {
        printf("%d, ", i);
      }
    }
  }
  printf("\n");
}
