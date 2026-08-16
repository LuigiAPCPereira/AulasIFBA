# 📚 Guia de Estudo e Consulta Pessoal — Linguagem C

Material de consulta para revisar os conteúdos estudados em C nas aulas e nos exercícios do IFBA, com exemplos simples de sintaxe e lógica.

---

## 📑 Sumário

1. [Conceitos básicos e tipos](#1-conceitos-básicos-e-tipos)
2. [Sintaxe, comentários e escapes](#2-sintaxe-comentários-e-escapes)
3. [Entrada e saída com `stdio.h`](#3-entrada-e-saída-com-stdioh)
4. [Operadores](#4-operadores)
5. [Condicionais](#5-condicionais)
6. [Repetição e loops](#6-repetição-e-loops)
7. [Validação e controle dos dados](#7-validação-e-controle-dos-dados)
8. [Biblioteca matemática](#8-biblioteca-matemática)
9. [Exercícios de condicionais](#9-exercícios-de-condicionais)
10. [Exercícios de repetição](#10-exercícios-de-repetição)
11. [Compilação dos programas](#11-compilação-dos-programas)

---

## 📑 Fonte

- https://www.w3schools.com/c/index.php

---

## 📌 1. Conceitos básicos e tipos

Um programa em C começa com a inclusão de uma biblioteca e a criação da função `main`:

```c
#include <stdio.h>

int main() {
    // código do programa
    return 0;
}
```

Cada tipo de variável guarda um tipo de valor diferente:

| Tipo           | Memória | Especificador | Quando Usar                             | Exemplo                   |
| :------------- | :-----: | :-----------: | :-------------------------------------- | :------------------------ |
| `int`          | 4 bytes | `%d` ou `%i`  | Números inteiros positivos ou negativos | `int qtd = 10;`           |
| `unsigned int` | 4 bytes |     `%u`      | Números inteiros somente positivos      | `unsigned int pos = 5;`   |
| `float`        | 4 bytes |     `%f`      | Números decimais com precisão simples   | `float nota = 8.5f;`      |
| `double`       | 8 bytes |     `%lf`     | Números decimais com maior precisão     | `double delta = 2.25;`    |
| `char`         | 1 byte  |     `%c`      | Um único caractere                      | `char resposta = 'S';`    |
| `char[]`       | N bytes |     `%s`      | Texto ou sequência de caracteres        | `char nome[30] = "IFBA";` |

### Inicialização de variáveis

Inicialize as variáveis antes de usá-las. Isso evita trabalhar com valores aleatórios da memória:

```c
int numero = 0;
int soma = 0;
float media = 0;
```

### Formatação de Exibição (Casas Decimais)

- `%.2f` ou `%.2lf` mostra duas casas decimais.
- `%.0f` ou `%.0lf` mostra o valor sem casas decimais.

Os especificadores mudam de acordo com o tipo e a função utilizada. Por exemplo, `double` usa `%lf` no `scanf` e pode usar `%.2lf` no `printf`.

---

## 💬 2. Sintaxe, Comentários & Sequências de Escape

Cada instrução termina com ponto e vírgula (`;`). As chaves (`{}`) marcam o início e o fim de um bloco.

### Comentários

Comentários ajudam a organizar o código e explicar sua lógica:

```c
// Este comentário ocupa uma linha.

/* Este comentário pode ocupar
   várias linhas. */
```

### Sequências de Escape (Escape Sequences)

Sequências de escape são caracteres especiais usados principalmente dentro do `printf`:

| Sequência | Nome           | Função                     | Exemplo                         |
| :-------: | :------------- | :------------------------- | :------------------------------ |
|   `\n`    | Newline        | Pula para a próxima linha  | `printf("Olá\nMundo");`         |
|   `\t`    | Horizontal Tab | Adiciona uma tabulação     | `printf("Nome:\tLuigi");`       |
|   `\"`    | Double Quote   | Mostra aspas duplas        | `printf("Ele disse: \"Olá\"");` |
|   `\\`    | Backslash      | Mostra uma barra invertida | `printf("Caminho: C:\\\\src");` |
|   `\'`    | Single Quote   | Mostra aspas simples       | `printf("Caractere: \'A\'");`   |

Exemplo:

```c
printf("Nome:\tLuigi\n");
```

---

## 📥 3. Entrada e saída com `stdio.h`

### Mostrando informações com `printf`

Use `printf` para mostrar textos e resultados:

```c
printf("Digite um número: ");
printf("Resultado: %d\n", numero);
printf("Média: %.1f\n", media);
```

### Lendo informações com `scanf`

Use `scanf` para receber valores digitados:

```c
int numero;
scanf("%d", &numero);

float nota;
scanf("%f", &nota);

double a, b, c;
scanf("%lf %lf %lf", &a, &b, &c);
```

No `scanf`, use `&` antes do nome das variáveis para informar o endereço onde o valor deve ser armazenado.

---

## 🧮 4. Operadores

### Operadores aritméticos

Use estes operadores para fazer cálculos:

| Operador | Operação                 |
| :------: | :----------------------- |
|   `+`    | Soma                     |
|   `-`    | Subtração                |
|   `*`    | Multiplicação            |
|   `/`    | Divisão                  |
|   `%`    | Resto da divisão inteira |

O operador `%` é muito usado nos exercícios:

```c
if (numero % 2 == 0) {
    // o resto é zero, então o número é par
}
```

Também é possível usar atribuições abreviadas:

```c
soma += numero;      // soma = soma + numero
fatorial *= i;       // fatorial = fatorial * i
i++;                 // i = i + 1
i--;                 // i = i - 1
```

### Operadores de comparação

Use comparações dentro das condições:

| Operador | Significado    |
| :------: | :------------- |
|   `==`   | Igual          |
|   `!=`   | Diferente      |
|   `>`    | Maior          |
|   `<`    | Menor          |
|   `>=`   | Maior ou igual |
|   `<=`   | Menor ou igual |

<mark>Não confunda `=` com `==`:</mark> `=` recebe um valor e `==` compara dois valores.

### Como digitar os operadores no teclado

Em um teclado comum, os símbolos podem ser digitados assim:

|   Símbolo    |    Tecla     |
| :----------: | :----------: |
| <kbd>=</kbd> | <kbd>=</kbd> |
| <kbd>!</kbd> | <kbd>!</kbd> |
|     `<`      |     `<`      |
|     `>`      |     `>`      |

Para formar os operadores completos, digite os símbolos na ordem indicada:

|         Operador         | Sequência                   |
| :----------------------: | :-------------------------- |
| <kbd>=</kbd><kbd>=</kbd> | <kbd>=</kbd> e <kbd>=</kbd> |
| <kbd>!</kbd><kbd>=</kbd> | <kbd>!</kbd> e <kbd>=</kbd> |
|           `>=`           | `>` e <kbd>=</kbd>          |
|           `<=`           | `<` e <kbd>=</kbd>          |

A posição das teclas pode mudar de acordo com o modelo e o idioma do teclado. O importante é localizar os símbolos `<`, `>`, <kbd>!</kbd> e <kbd>=</kbd>.

### Operadores lógicos

| Operador | Significado                                        | Exemplo                      |
| :------: | :------------------------------------------------- | :--------------------------- |
|   `&&`   | E: todas as condições precisam ser verdadeiras     | `idade >= 18 && idade <= 70` |
|  `\|\|`  | OU: pelo menos uma condição precisa ser verdadeira | `nota < 0 \|\| nota > 10`    |
|   `!`    | NÃO: inverte uma condição                          | `!primo`                     |

---

## 🔀 5. Condicionais

Use condicionais para escolher o que deve acontecer em cada situação.

### `if`, `else if` e `else`

```
if (numero > 0) {
    printf("Positivo\n");
} else if (numero == 0) {
    printf("Zero\n");
} else {
    printf("Negativo\n");
}
```

- `if` testa a primeira condição.
- `else if` testa outra condição se a anterior for falsa.
- `else` executa quando nenhuma condição anterior for verdadeira.

Nos exercícios, as condicionais foram usadas para verificar paridade, validade de triângulo, idade para voto, divisibilidade e delta de Bhaskara.

---

## 🔁 6. Repetição e loops

Use loops quando precisar repetir uma parte do código.

### `for`

Use `for` quando já souber quantas vezes repetir:

```c
for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
}
```

### `while`

Use `while` quando a repetição depender de uma condição:

```c
while (numero != 0) {
    soma += numero;
    scanf("%d", &numero);
}
```

Se a condição já começar falsa, o `while` pode não executar nenhuma vez.

### `do...while`

Use `do...while` quando o bloco precisar executar pelo menos uma vez, como na validação de entradas:

```c
do {
    printf("Digite um número positivo: ");
    scanf("%d", &numero);
} while (numero <= 0);
```

### `break`

Use `break` para sair imediatamente de um loop:

```c
while (1) {
    scanf("%d", &numero);

    if (numero < 0) {
        break;
    }
}
```

---

## ✅ 7. Validação e controle dos dados

Valide os dados quando o exercício exigir uma entrada específica. Para isso, repita a leitura até receber um valor válido.

```c
do {
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Digite um valor válido.\n");
    }
} while (numero <= 0);
```

Também uso valores especiais para encerrar a leitura:

- `0` encerra a soma de números;
- um número negativo encerra a contagem de pares e ímpares;
- uma nota menor que `0` ou maior que `10` encerra a leitura de notas.

Para acumular resultados, inicialize uma variável antes do loop:

```c
int soma = 0;
int quantidade = 0;

soma += numero;
quantidade++;
```

Para calcular uma média, divida a soma pela quantidade de valores válidos:

```c
media = soma / quantidade;
```

Verifique se `quantidade > 0` antes da divisão para não dividir por zero.

---

## 📐 8. Biblioteca matemática

No exercício de Bhaskara, a biblioteca `math.h` é incluída para usar a raiz quadrada:

```c
#include <math.h>

raiz = sqrt(valor);
```

Na fórmula de Bhaskara, o delta usa a expressão <code>b<sup>2</sup> - 4ac</code>:

```c
delta = (b * b) - 4 * a * c;
```

Depois, verifique o resultado:

- Se `delta > 0`, são encontradas duas raízes reais.
- Se `delta == 0`, é encontrada uma raiz real.
- Se `delta < 0`, não são encontradas raízes reais.

No GCC, pode ser necessário adicionar a opção `-lm` ao compilar:

```bash
gcc bhaskara.c -o bhaskara -lm
```

---

## 🔀 9. Exercícios de condicionais

Os exercícios de condicionais estão nos seguintes arquivos:

| Arquivo              | Conteúdo praticado                                                  |
| :------------------- | :------------------------------------------------------------------ |
| `src/par_ou_impar.c` | Uso de `% 2` para descobrir se um número é par ou ímpar.            |
| `src/triangulo.c`    | Soma de três ângulos e verificação do resultado `180`.              |
| `src/bhaskara.c`     | Validação de `a`, cálculo do delta e tratamento de três resultados. |
| `src/idade_voto.c`   | Comparação de faixas de idade usando `if` e `else if`.              |
| `src/divisivel.c`    | Uso do resto da divisão para verificar se um número divide outro.   |

### Exemplo: par ou ímpar

```c
if (numero % 2 == 0) {
    printf("O número é par.\n");
} else {
    printf("O número é ímpar.\n");
}
```

---

## 🔁 10. Exercícios de repetição

Os exercícios de repetição praticam `for`, `while`, `do...while`, validações, contadores e acumuladores:

| Tarefa | Arquivo                   | Conteúdo praticado                                             |
| :----: | :------------------------ | :------------------------------------------------------------- |
|   01   | `src/primo.c`             | Teste de divisores com `%` para descobrir se o número é primo. |
|   02   | `src/fatorial.c`          | Multiplicação dos números de `1` até `N` usando `for`.         |
|   03   | `src/soma-ate-zero.c`     | Soma de números até receber `0`.                               |
|   04   | `src/tabuada.c`           | Repetição da multiplicação de `1` até `10` usando `while`.     |
| Extra  | `src/loop_par.c`          | Impressão dos números pares de `0` até `N`.                    |
|   05   | `src/maior-menor-10.c`    | Leitura de 10 números e comparação do maior e do menor.        |
|   06   | `src/fibonacci.c`         | Geração dos primeiros `N` termos de Fibonacci.                 |
|   07   | `src/conta-par-impar.c`   | Contagem de pares e ímpares até receber um número negativo.    |
|   08   | `src/divisao-subtracao.c` | Cálculo de quociente e resto usando subtrações repetidas.      |
|   09   | `src/media-notas.c`       | Soma de notas válidas e cálculo da média.                      |
|   10   | `src/inverte-digitos.c`   | Separação dos algarismos com `% 10` e `/ 10` para invertê-los. |

### Fatorial

O fatorial começa com `1`, porque multiplicar por zero faria todo o resultado virar zero:

```c
int fatorial = 1;

for (int i = 1; i <= numero; i++) {
    fatorial *= i;
}
```

### Divisão usando subtração

O resto começa com o valor do dividendo. Enquanto o resto for maior ou igual ao divisor, faça uma subtração e aumente o quociente:

```c
resto = dividendo;

while (resto >= divisor) {
    resto -= divisor;
    quociente++;
}
```

### Invertendo os dígitos

Para inverter os dígitos, pegue o último algarismo com `% 10`, acrescente-o ao resultado e retire-o usando `/ 10`:

```c
while (numero > 0) {
    resto = numero % 10;
    invertido = invertido * 10 + resto;
    numero = numero / 10;
}
```

---

## ▶️ 11. Compilação dos programas

Para compilar manualmente, acesse a pasta `src/`:

```bash
cd src
gcc primo.c -o primo
```

Depois, no Linux ou macOS, execute assim:

```bash
./primo
```

Para o programa de Bhaskara, adicione `-lm`:

```bash
gcc bhaskara.c -o bhaskara -lm
```

## 📈 Progresso

Conteúdos já praticados:

- entrada e saída de dados;
- variáveis `int`, `float` e `double`;
- operadores aritméticos, relacionais e lógicos;
- condicionais;
- loops `for`, `while` e `do...while`;
- validação de entradas;
- contadores e acumuladores;
- cálculo de média, fatorial e Fibonacci;
- uso do resto e da divisão inteira para trabalhar com algarismos;
- uso da biblioteca `math.h` no exercício de Bhaskara.

Os próximos assuntos podem incluir funções, vetores e outros conteúdos das próximas aulas.
