# Aula 3: Revisão de Sintaxe Básica em C com Analogias Simples

**Objetivo**: Revisar os conceitos aprendidos na primeira e segunda aula por
meio de analogias simples e explicações práticas.

---

## **1. Estrutura Básica de um Programa**  

**Analogia**: Imagine que você está escrevendo uma peça de teatro.  

- O **`#include <stdio.h>`** é como chamar o diretor e os técnicos para o palco.
Sem eles, você não consegue operar as luzes e o som
(funções como `printf` e `scanf`).
- A função **`main()`** é o palco principal, onde a ação acontece.
Tudo o que você quer que o programa faça deve estar dentro dele.  
- O comando **`return 0;`** é como dizer "Fim do show!".
Ele sinaliza que tudo correu bem.

---

## **2. Variáveis e Tipos de Dados**

**Analogia**: Pense em variáveis como caixas de armazenamento.  

- Uma caixa com a etiqueta `int` só pode conter números inteiros,
como 10 ou -5.  
- Uma caixa com a etiqueta `float` pode armazenar números com casas decimais,
como 3.14 ou -0.01.  
- Já a caixa `char` é especial para letras ou símbolos, como 'A' ou 'z'.  

**Exemplo de caixa:**

```c
int idade = 25;    // Uma caixa chamada "idade" que guarda o número 25.
float altura = 1.8; // Uma caixa chamada "altura" que guarda 1.8.
char letra = 'A';  // Uma caixa chamada "letra" que guarda 'A'.
```

---

## **3. Entrada e Saída de Dados**  

**Analogia**: Imagine que você está em uma conversa.  

- **`printf`** é como você falando para a outra pessoa.  
- **`scanf`** é como você escutando a resposta dela.  

**Exemplo de conversa:**

```c
#include <stdio.h>

int main() {
    int idade;
    printf("Qual a sua idade? ");  // Você pergunta
    scanf("%d", &idade);          // Você escuta a resposta
    printf("Você tem %d anos!\n", idade);  // Você responde
    return 0;
}
```

---

## **4. Trabalhando com Strings**  

Strings são como frases ou palavras completas. Em C, elas são tratadas como um
conjunto de caracteres.

**Dica prática**: Para lidar com nomes completos,
use `fgets()` em vez de `scanf`.  

**Exemplo:**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);  // Lê o nome com espaços
    nome[strcspn(nome, "\n")] = '\0';  // Remove o '\n' da string
    printf("Olá, %s!\n", nome);
    return 0;
}
```

---

## **5. Resumo Prático**

- Todo programa C precisa de uma **função `main()`**.  
- Use **`printf`** para exibir mensagens e **`scanf`** para capturar dados.  
- Escolha o **tipo de dado correto** para suas variáveis:  
  - **`int`** para números inteiros.  
  - **`float`** ou **`double`** para números com casas decimais.  
  - **`char`** para caracteres.  
  - Strings (palavras ou frases) são tratadas como arrays de caracteres.

---

### Tarefa de Revisão

- Reescreva o programa que calcula a média de três notas para lidar com nomes
completos de alunos. A saída deve ser:
  - "Olá [nome], a sua média é [média]."

- Crie um programa que peça ao usuário um número e exiba o quadrado desse número.
