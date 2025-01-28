#include <stdio.h>
#include <string.h>

int main()
{
  char paswd[ ] = "pass1";
  char pass[200];

  do {
    // comandos responsaveis pela coleta da senha
    // solicitacao da senha
    printf("Digite sua senha: ");

    // leitura e armazenamento da cadeia de caracteres na variavel pass
    fgets(pass, sizeof(pass), stdin);

    // substitui o caracter \n pelo \0 indicando o fim da string
    pass[strcspn(pass, "\n")] = '\0';

    // Compara o conteúdo das strings usando strcmp
    if (strcmp(pass, paswd) == 0) {
        break; // Sai do loop se as senhas forem iguais
    } else {
        printf("Senha incorreta. Tente novamente.\n");
    }
  } while (1); // loop infinito até a senha estar correta

  printf("Acesso autorizado!\n"); // mensagem informativa de que o acesso foi bem sucedido
  return 0;
}
