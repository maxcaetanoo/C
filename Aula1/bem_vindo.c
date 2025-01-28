#include <stdio.h>
#include <string.h>

int main()
{
  // Variaveis
  char name[25];
  int age;

  // Efetua a apresentação do programa
  printf("Bem vindo ao estudo em C\n\n");

  // Solicita o nome
  printf("Insira seu prineiro nome: ");
  scanf("%s", name);
  // fgets(name, sizeof(name), stdin);

  // // Remove a quebra de linha
  // name[strcspn(name, "\n")] = '\0';

  // Solicita a idade
  printf("Insira sua idade: ");
  scanf("%d", &age);

  // Exibe na tela o nome e a idade do usuário
  printf("Olá programador %s com %d de idade bem vindo à primeira aula\n", name, age);

  return 0;
}
