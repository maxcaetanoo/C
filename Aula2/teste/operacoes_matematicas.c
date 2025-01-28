#include <stdio.h>

int main()
{
  int opt, sair, num1, num2;
  sair = 0;

  // loop infinito
  do {
    // exibindo as opções
    printf("Escolha uma opção:\n");
    printf("1. Somar dois números\n");
    printf("2. Subtrair dois números\n");
    printf("3. Multiplicar dois números\n");
    printf("4. Dividir dois números\n");
    printf("5. Sair\n");

    // aguardando seleção
    scanf("%d", &opt);

    if (opt != 5) {
      printf("Digite o primeiro número: ");
      scanf("%d", &num1);
      printf("Digite o segundo número: ");
      scanf("%d", &num2);
    }

    // processamento da seleção
    switch (opt) {
      case 1:
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
      case 2:
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
      case 3:
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
      case 4:
        printf("%d / %d = %d\n", num1, num2, num1 % num2);
        break;
      case 5:
        printf("Saindo...\n");
        sair=1;
        break;
      default:
        printf("Opção invalida, Tente novamente.\n");
    }
  } while (sair != 1);

  return 0;
}
