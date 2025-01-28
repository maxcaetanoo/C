#include <stdio.h>
#include <string.h>

int main()
{
  char nome[50];
  int idade;
  float salario;

  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';
  
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  
  printf("Digite seu salario: ");
  scanf("%f", &salario);
 
  printf("Olá, %s! Você tem %d anos e recebe R$%.2f\n", nome, idade, salario);
}
