#include <stdio.h>

int main()
{
  float val1, val2, area;
  int opt; 

  // solicitando a seleção de uma opção
  printf("1 - Calcular área do quadrado L(lado) * L(lado);\n");
  printf("2 - Calcular área do retângulo A(altura) * L(largura);\n");
  printf("3 - Calcular área do triângulo A(altura) * L(largura) / 2;\n");
  printf("Digite a opção desejada entre (1-3): ");
  scanf("%d", &opt);

  switch (opt) {
    case 1:
      // solicitando o valor de um lado
      printf("Digite o lado: ");
      scanf("%f", &val1);

      // efetuando o processamento
      area = val1 * val1;

      // exibindo na tela
      printf("A área do quadrado é %.2f\n", area);

      break;
    case 2:
      // solicitando o valor da altura
      printf("Digite a altura: ");
      scanf("%f", &val1);

      // solicitando o valor da largura
      printf("Digite a largura: ");
      scanf("%f", &val2);

      // efetuando o processamento
      area = val1 * val2;

      // exibindo na tela
      printf("A área do retângulo é %.2f\n", area);

      break;
    case 3:
      // solicitando o valor da altura
      printf("Digite a altura: ");
      scanf("%f", &val1);

      // solicitando o valor da largura
      printf("Digite a largura: ");
      scanf("%f", &val2);

      //efetuando o processamento
      area = (val1 * val2) / 2;

      // exibindo na tela
      printf("A área do triângulo é %.2f\n", area);

      break;
    default:
      // informando que a opção selecionada é inválida
      printf("Opção %f não é uma opção válida\n");
  }
  return 0;
}
