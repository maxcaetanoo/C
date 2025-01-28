#include <stdio.h>
#include <string.h>

int main()
{
  char nome[200];
  int repet, i;

  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';

  printf("Quantas vezes deseja exibi-lo? ");
  scanf("%d", &repet);

  for (int i = 1; i <= repet ; i++) {
    printf("%d.  %s\n", i, nome);
  }
}
