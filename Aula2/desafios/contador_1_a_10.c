#include <stdio.h>

int main()
{
  int num=10;

  // informando o inicio da contagem
  printf("Contando de 1 até 10...\n");
  
  // laço de repetição for responsavel por efetuar a contagem
  for (int count=1; count <= num; count++) {
    // if else responsavel por verificar se chegamos a 10 para pular a linha
    if (count == num) {
      printf("%d.\n", count);
    }else {
      printf("%d, ", count);
    }
  }

  return 0;
}
