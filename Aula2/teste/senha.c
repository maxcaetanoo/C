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
