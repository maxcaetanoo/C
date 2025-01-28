#include <stdio.h>

int main()
{
  // Definindo variáveis
  float nota1, nota2, nota3, media;

  // Solicitando a nota1
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  // Solicitando a nota2
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  // Solicitando a nota3
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  // Efetuando o processamento das notas
  media = (nota1 + nota2 + nota3) / 3;

  // Saída final do programa
  printf("A media das notas é: %.2f\n", media);

  return 0;
}
