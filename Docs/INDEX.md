# 📚 Guia de Estudo e Consulta Pessoal — Linguagem C

Material didático de consulta rápida para revisar conceitos da faculdade (IFBA), relembrar a sintaxe e a lógica da linguagem C e utilizar como fonte de referência ao criar novos programas.

---

## 📑 Sumário
1. [Conceitos Fundamentais & Tipos](#1-conceitos-fundamentais--tipos)
2. [Sintaxe, Comentários & Sequências de Escape](#2-sintaxe-comentários--sequências-de-escape)
3. [Entrada e Saída (`stdio.h`)](#3-entrada-e-saída-stdioh)
4. [Operadores & Lógica Matemáticos](#4-operadores--lógica-matemáticos)
5. [Tomada de Decisão (Condicionais)](#5-tomada-de-decisão-condicionais)
6. [Repetição e Loops (Estruturas de Repetição)](#6-repetição-e-loops-estruturas-de-repetição)
7. [Strings (Arrays de Caracteres)](#7-strings-arrays-de-caracteres)
8. [Linha de Comando & Automação (`stdlib.h`)](#8-linha-de-comando--automação-stdlibh)
9. [Biblioteca Matemática (`math.h`)](#9-biblioteca-matemática-mathh)
10. [Códigos-Modelo do Repositório (`src/`)](#10-códigos-modelo-do-repositório-src)

---

## 📑 Fontes
1. https://www.w3schools.com/c/index.php

## 📌 1. Conceitos Fundamentais & Tipos

### Tipos Primitivos
Cada tipo especifica o espaço alocado na memória RAM e como o computador interpreta o valor armazenado:

| Tipo | Memória | Especificador | Quando Usar | Exemplo |
| :--- | :---: | :---: | :--- | :--- |
| `int` | 4 bytes | `%d` ou `%i` | Números inteiros positivos ou negativos (contadores, idades, quantidades) | `int qtd = 10;` |
| `unsigned int` | 4 bytes | `%u` | Inteiros apenas positivos (elimina sinal negativo e dobra a capacidade positiva) | `unsigned int pos = 5;` |
| `float` | 4 bytes | `%f` | Números com vírgula/decimais de precisão simples (~6 a 7 casas) | `float angulo = 45.5f;` |
| `double` | 8 bytes | `%lf` | Decimais de precisão dupla (~15 a 17 casas; essencial p/ cálculos precisos como Bhaskara) | `double delta = 0.0025;` |
| `char` | 1 byte | `%c` | Um único caractere entre aspas simples (letra, símbolo ou código ASCII) | `char resp = 'S';` |
| `char[]` | N bytes | `%s` | Texto/String (sequência de caracteres terminada em `\0`) | `char nome[30] = "IFBA";` |

### Formatação de Exibição (Casas Decimais)
* `%.2f` ou `%.2lf` → Exibe o valor arredondado com exatamente **2 casas decimais** (ex: `3.14`).
* `%.0f` ou `%.0lf` → Exibe sem nenhuma casa decimal (arredonda para o inteiro mais próximo).

### Regra Importante: Inicialização de Variáveis
Variáveis criadas sem valor inicial contêm **"lixo de memória"** (valores residuais que estavam na RAM), o que pode causar erros em somatórios ou contadores.
```c
int soma = 0;        // CORRETO: garante início em zero para acumuladores
double a = 0, b = 0; // Inicializando múltiplas variáveis no mesmo tipo
```

---

## 💬 2. Sintaxe, Comentários & Sequências de Escape

### Tipos de Comentários em C
Comentários são ignorados pelo compilador e servem para organizar o código e explicar trechos lógicos.

| Sintaxe | Tipo | Descrição | Exemplo |
| :---: | :--- | :--- | :--- |
| `//` | Linha única | Comenta tudo da posição do `//` até o final da linha atual | `int a = 10; // Inicializa a com 10` |
| `/* ... */` | Múltiplas linhas | Comenta blocos inteiros, podendo abranger várias linhas | `/* Este bloco de código\n calcula o delta */` |

```c
// Comentário de uma linha só

/*
   Comentário de bloco / múltiplas linhas.
   Útil para documentação de funções ou 
   desativar temporariamente um trecho de código.
*/
```

### Sequências de Escape (Escape Sequences)
Caracteres especiais precedidos por barra invertida `\` para formatar saída de texto em `printf` e strings:

| Sequência | Nome | Função | Exemplo em Código | Saída no Terminal |
| :---: | :--- | :--- | :--- | :--- |
| `\n` | Newline | Insere uma nova linha (quebra de linha) | `printf("Olá\nMundo");` | `Olá`<br>`Mundo` |
| `\t` | Horizontal Tab | Insere um tab (espaçamento horizontal padrão) | `printf("Nome:\tLuigi");` | `Nome:   Luigi` |
| `\"` | Double Quote | Insere aspas duplas dentro de uma string | `printf("Ele disse: \"Olá\"");` | `Ele disse: "Olá"` |
| `\\` | Backslash | Insere um caractere de barra invertida (`\`) | `printf("Caminho: C:\\src");` | `Caminho: C:\src` |
| `\'` | Single Quote | Insere aspas simples | `printf("Caractere: \'A\'");` | `Caractere: 'A'` |

---

## 📥 3. Entrada e Saída (`stdio.h`)

### Exibição (`printf`)
Função para exibir mensagens e valores formatados no terminal.
```c
printf("Texto simples\n"); // \n pula para a próxima linha
printf("Resultado: %d |\t Média: %.2lf\n", total, media);
```

### Leitura de Dados (`scanf`)
Lê valores digitados pelo usuário no teclado.
```c
int idade;
scanf("%d", &idade); // Lê inteiro e guarda no endereço da variável 'idade'

double a, b, c;
scanf("%lf %lf %lf", &a, &b, &c); // Lê 3 decimais de uma só vez
```

### 🔍 Por que usar o operador `&` (Endereço) no `scanf`?
* **Variáveis Primitivas (`int`, `float`, `double`, `char`)**: O `scanf` precisa saber **onde na memória RAM** a variável está guardada para escrever o valor direto nela. O símbolo `&` pega esse endereço de memória.
* **Strings (`char[]`)**: **Não** usam `&`. Em C, o próprio nome de um array já representa o endereço de memória do seu primeiro elemento.
```c
char nome[50];
scanf("%s", nome); // Sem '&'!
```

---

## 🧮 4. Operadores & Lógica Matemáticos

### Operadores Aritméticos
* `+` (Adição), `-` (Subtração), `*` (Multiplicação), `/` (Divisão).
* `%` (**Módulo**): Retorna o **resto da divisão inteira**.
  * **Verificar se é par/ímpar**: `numero % 2 == 0` (se resto for 0, é par; se for 1, é ímpar).
  * **Verificar se é divisível**: `numero % divisor == 0`.

```c
10 % 3 = 1  // 10 dividido por 3 é 3, com resto 1
10 % 2 = 0  // Resto é 0 -> Número Par
```

### Atribuição Composta & Incremento
Atalhos sintáticos para atualizar o valor de uma variável a partir dela mesma:
* `soma += numero;` → O mesmo que `soma = soma + numero;`
* `fatorial *= i;`  → O mesmo que `fatorial = fatorial * i;`
* `i++;`           → O mesmo que `i = i + 1;` (Incremento)
* `i--;`           → O mesmo que `i = i - 1;` (Decremento)

### Operadores Relacionais e Lógicos
Retornam sempre `1` (Verdadeiro) ou `0` (Falso) para controle de decisões.

| Operador | Significado | Exemplo |
| :---: | :--- | :--- |
| `==` | Igual a *(Cuidado: `=` é atribuição, `==` é comparação!)* | `if (a == b)` |
| `!=` | Diferente de | `if (numero != 0)` |
| `>` / `<` | Maior que / Menor que | `if (idade > 18)` |
| `>=` / `<=` | Maior ou igual / Menor ou igual | `if (nota >= 7.0)` |
| `&&` | **E (AND)**: Todas as condições devem ser verdadeiras simultaneamente | `if (idade >= 18 && idade <= 70)` |
| `\|\|` | **OU (OR)**: Pelo menos uma das condições deve ser verdadeira | `if (idade < 16 \|\| idade > 70)` |
| `!` | **NÃO (NOT)**: Inverte o valor lógico (Verdadeiro vira Falso) | `if (!primo)` |

---

## 🔀 5. Tomada de Decisão (Condicionais)

### 1. `if / else if / else`
Avalia as condições de cima para baixo. Executa o primeiro bloco cuja condição for verdadeira.
```c
if (idade < 0) {
    printf("Idade inválida.\n");
} else if (idade < 16) {
    printf("Não pode votar.\n");
} else if (idade >= 18 && idade <= 70) {
    printf("Voto obrigatório.\n");
} else {
    printf("Voto facultativo.\n");
}
```

### 2. Operador Ternário (`? :`)
Estrutura enxuta para decidir o valor de uma atribuição em uma linha só.
```c
// Sintaxe: (condição) ? valor_se_verdadeiro : valor_se_falso;
int maior = (a > b) ? a : b;
```

### 3. `switch / case`
Ideal para comparar **uma única variável** contra **vários valores fixos** (inteiros ou `char`).
```c
switch (opcao) {
    case 1:
        printf("Opção 1 selecionada\n");
        break; // O 'break' é essencial para sair do switch e não executar os cases abaixo
    case 2:
        printf("Opção 2 selecionada\n");
        break;
    default:
        printf("Opção padrão / Inválida\n");
        break;
}
```

---

## 🔁 6. Repetição e Loops (Estruturas de Repetição)

### Qual estrutura escolher?
1. **`for`**: Quando **se sabe de antemão** o número de repetições (ex: repetir 10 vezes, percorrer de 1 a N).
2. **`while`**: Quando a repetição depende de uma condição e ela **pode ser falsa de início** (pode executar 0 vezes).
3. **`do...while`**: Quando o bloco **deve ser executado obrigatoriamente pelo menos 1 vez** antes de testar a condição (ideal para validação de formulários/menu).

### Exemplos Práticos

#### `for` (Inicialização ; Condição ; Incremento)
```c
// Imprime números de 1 a 10
for (int i = 1; i <= 10; i++) {
    printf("%d ", i);
}
```

#### `while` (Pré-testado)
```c
// Repete enquanto o usuário não digitar 0
int numero = 0;
scanf("%d", &numero);
while (numero != 0) {
    // faz algo com o numero
    scanf("%d", &numero);
}
```

#### `do...while` (Pós-testado — Validação de Entrada)
```c
int num = 0;
do {
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("[ERRO] O número precisa ser maior que zero!\n");
    }
} while (num <= 0); // Fica preso no loop enquanto a entrada for inválida
```

### Comandos Especiais nos Loops
* `break;` → Sai imediatamente do loop atual.
* `continue;` → Interrompe apenas a iteração atual e salta direto para a próxima volta do loop.

---

## 🧵 7. Strings (Arrays de Caracteres)

Em C não há tipo "String" nativo. Uma string é uma sequência de `char` terminada com o caractere nulo `\0` (que avisa ao C onde o texto termina na memória).

```c
// Reservando espaço para até 49 caracteres + 1 para o '\0'
char nome[50];

printf("Digite seu nome: ");
scanf("%s", nome); // Lê apenas a primeira palavra (para ao encontrar espaço)

printf("Nome: %s\n", nome);
```

---

## 💻 8. Linha de Comando & Automação (`stdlib.h`)

### Argumentos da Função `main` (`argc` e `argv`)
Permitem passar parâmetros para o programa diretamente pelo terminal na execução (ex: `./compilar programa.c`).

```c
#include <stdio.h>
#include <stdlib.h> // Contém as funções system() e sprintf()

int main(int argc, char *argv[]) {
    // argc (ARGument Count): Quantidade total de argumentos recebidos
    // argv (ARGument Vector): Array de textos com os argumentos
    // argv[0] -> Nome do próprio programa executável (ex: "./compilar")
    // argv[1] -> Primeiro parâmetro passado (ex: "bhaskara.c")
    
    if (argc != 2) {
        printf("Uso correto: %s <nome_do_arquivo.c>\n", argv[0]);
        return 1;
    }

    char comando[256];
    // sprintf: Monta uma string formatada dentro da variável 'comando'
    sprintf(comando, "gcc src/%s -o binarios/%s && ./binarios/%s", argv[1], argv[1], argv[1]);
    
    // system: Envia o comando montado para ser executado no terminal do SO
    system(comando);
    
    return 0;
}
```

---

## 📐 9. Biblioteca Matemática (`math.h`)

Para operações matemáticas avançadas, inclua `#include <math.h>`.

| Função | Descrição | Exemplo | Resultado |
| :--- | :--- | :--- | :--- |
| `sqrt(x)` | Retorna a **raiz quadrada** de `x` | `sqrt(25.0)` | `5.0` |
| `pow(b, e)` | Retorna a **base `b` elevada ao expoente `e`** | `pow(2.0, 3.0)` | `8.0` |
| `fabs(x)` | Retorna o **valor absoluto** (remove sinal negativo) | `fabs(-10.5)` | `10.5` |

> ⚠️ **Nota de Compilação no Linux (GCC)**: Ao utilizar a `<math.h>`, pode ser necessário adicionar a flag `-lm` ao final da compilação:
> `gcc programa.c -o programa -lm`

---

## 💡 10. Códigos-Modelo do Repositório (`src/`)

### A. Verificar se Número é Par ou Ímpar (`src/par_ou_impar.c`)
```c
if (numero % 2 == 0) {
    printf("O número %d é par.\n", numero);
} else {
    printf("O número %d é ímpar.\n", numero);
}
```

### B. Somar Números Até Digitar Zero (`src/soma-ate-zero.c`)
```c
int soma = 0, numero = 0;
printf("Digite um número (0 para parar): ");
scanf("%d", &numero);

while (numero != 0) {
    soma += numero; // Acumula a soma
    printf("Digite outro número (0 para parar): ");
    scanf("%d", &numero);
}
printf("A soma total é: %d\n", soma);
```

### C. Calculadora de Fatorial com `for` (`src/fatorial.c`)
```c
int numero = 5, fatorial = 1;
for (int i = 1; i <= numero; i++) {
    fatorial *= i; // Multiplica 1 * 2 * 3 * ... * N
}
printf("O fatorial de %d é %d\n", numero, fatorial);
```

### D. Verificar se um Número é Primo (`src/primo.c`)
```c
int numero = 17, divisor = 2;

if (numero <= 1) {
    printf("O número %d não é primo.\n", numero);
} else {
    while (divisor < numero) {
        if (numero % divisor == 0) {
            printf("O número %d não é primo.\n", numero);
            break; // Encontrou divisor além de 1 e dele mesmo; interrompe
        }
        divisor++;
    }
    if (divisor == numero) {
        printf("O número %d é primo.\n", numero);
    }
}
```

### E. Resolução de Equação do 2º Grau / Bhaskara (`src/bhaskara.c`)
```c
double a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;

// Garante que 'a' seja diferente de 0 (pois a=0 não é equação do 2º grau)
do {
    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) printf("[ERRO] 'a' não pode ser zero!\n");
} while (a == 0);

delta = (b * b) - 4 * a * c;

if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Duas raízes reais e distintas: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
} else if (delta == 0) {
    x1 = -b / (2 * a);
    printf("Uma raiz real e única: x = %.2lf\n", x1);
} else {
    printf("Não tem raízes reais (delta negativo).\n");
}
```
