#include <stdio.h>
#include <string.h>

int main()
{
  // Definindo variáveis
  char nome[50];
  int idade;
  float altura;

  // Solicitando nome
  printf("Digite seu nome: ");
  scanf("%s", nome);

  // Solicitando idade
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  
  // Solicitando altura
  printf("Digite sua altura (em metros): ");
  scanf("%f", &altura);

  // Saída final do programa
  printf("Olá %s! Voçê tem %d de idade e sua altura é %.2f metros.\n", nome,
         idade, altura);

  return 0;
}
