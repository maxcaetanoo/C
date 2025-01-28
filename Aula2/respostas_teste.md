# Respostas

## 1

```C
#include <stdio.h>

int main()
{
  int num;

  // solicitando que o número seja digitado para a operação
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  // processamento do valor para identificar o par ou ímpar
  if (num % 2 == 0) {
    printf("O número %d é par.\n", num);
  } else {
    printf("O número %d é ímpar.\n", num);
  }

  return 0;
}
```

---

## 2

```C
#include <stdio.h>

int main()
{
  int num;

  // solicitando valor de entrada
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  // efetuando processamento
  for (int i = 1; i <= 10; i++) {
    printf("%d X %d = %d\n", num, i, num*i);
  }

  return 0;
}
```

---

## 3

```C
#include <stdio.h>

int main()
{
  int num;

  // solicitando o valor da variavel num
  printf("Digite um número: ");
  scanf("%d", &num);

  // processamento
  for (int i = 1; i <= num; i++) {
    // se i não for divizivel por 3 então não é multiplo de 3
    if (i % 3 != 0) {
      // se não for o ultimo valor a aparecer tem virgula no fim
      if ( (i + 1) == num && (i + 1) % 3 == 0 || i == num) {
        printf("%d\n", i);
      } else if ( i != num) {
        printf("%d, ", i);
      }
    }
  }
  return 0;
}
```

---

## 4

```C
#include <stdio.h>

int main()
{
  int pass;
  int passwd = 123456;
  int count = 0;

  do {
    count++;

    // recebendo senha digitada pelo usuário
    printf("Digite a senha de 6 digitos: ");
    scanf("%d", &pass);

    // processamento da senha
    if (pass == passwd) {
      printf("Acesso permitido.\n");
      break;
    } else if (count < 3){
      printf("Senha incorreta, Tente novamente.\n");
    } else {
      printf("Senha incorreta, limite de 3 tentativas atingido.\nEncerrando...\n");
    }
  } while (count < 3);


  return 0;
}
```

---

## 5

```C
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
```
