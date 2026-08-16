# 💻 Programação — IFBA

Repositório destinado aos exercícios, atividades e códigos desenvolvidos durante as aulas de programação no **Instituto Federal da Bahia — IFBA**.

Este projeto também funciona como um registro da minha evolução ao longo do curso, começando pelos primeiros conceitos de programação e avançando gradualmente para conteúdos mais complexos.

---

## 📚 Sobre o repositório

Os códigos presentes aqui foram desenvolvidos durante as aulas, exercícios propostos pelos professores e estudos realizados ao longo do curso.

A primeira linguagem utilizada nas aulas foi **C**, servindo como introdução aos principais fundamentos da programação.

Entre os conceitos estudados estão:

- Entrada e saída de dados;
- Variáveis e tipos de dados (`int`, `float` e `double`);
- Operadores aritméticos, relacionais e lógicos;
- Resto da divisão e divisão inteira;
- Estruturas condicionais (`if`, `else if` e `else`);
- Estruturas de repetição (`for`, `while` e `do...while`);
- Validação de entradas;
- Contadores e acumuladores;
- Cálculo de médias, fatoriais e sequência de Fibonacci;
- Biblioteca matemática `math.h`;
- Compilação e execução com GCC.

> O conteúdo deste repositório será atualizado conforme novos assuntos forem estudados.

---

## 📁 Organização

Atualmente, os códigos-fonte estão organizados dentro da pasta `src/`.

```text
programacao-ifba/
│
├── src/
│   ├── bhaskara.c
│   ├── par-ou-impar.c
│   └── triangulo.c
│
├── .gitignore
├── LICENSE
└── README.md
```

A pasta `src/` contém os arquivos de código-fonte desenvolvidos durante as aulas.

Conforme novos exercícios forem criados, novos arquivos poderão ser adicionados à pasta.

---

## 📝 Lista de Exercícios (Condicionais)

Lista de exercícios de estruturas condicionais em **C**.

| #   | Status | Enunciado                                                                     | Arquivo              |
| --- | ------ | ----------------------------------------------------------------------------- | -------------------- |
| 01  | ✅     | Par ou Ímpar: determine se um número é par ou ímpar.                          | `src/par_ou_impar.c` |
| 02  | ✅     | Triângulo Válido: verifica se os ângulos formam um triângulo válido.          | `src/triangulo.c`    |
| 03  | ✅     | Bhaskara: calcula as raízes de uma equação do segundo grau.                   | `src/bhaskara.c`     |
| 04  | ✅     | Idade para Voto: verifica a obrigatoriedade do voto com base na idade.        | `src/idade_voto.c`   |
| 05  | ✅     | Divisibilidade: verifica se um número inteiro positivo é divisível por outro. | `src/divisivel.c`    |

---

## 📝 Lista de Exercícios (Repetição)

Lista de exercícios passados pelo professor — implementar em **C**.

| #   | Status | Enunciado                                                                             | Arquivo                   |
| --- | ------ | ------------------------------------------------------------------------------------- | ------------------------- |
| 01  | ✅     | Número primo: recebe um inteiro positivo e diz se é primo.                            | `src/primo.c`             |
| 02  | ✅     | Fatorial: recebe um inteiro positivo e calcula seu fatorial.                          | `src/fatorial.c`          |
| 03  | ✅     | Soma até zero: lê inteiros até digitar 0 e imprime a soma total.                      | `src/soma-ate-zero.c`     |
| 04  | ✅     | Tabuada: recebe um inteiro e imprime a tabuada de 1 a 10 com loop.                    | `src/tabuada.c`           |
| --  | ✅     | Pares de 0 até N: solicita número maior que 10 e imprime pares de 0 até N.            | `src/loop_par.c`          |
| 05  | ✅     | Maior e menor de 10: lê 10 inteiros e informa o maior e o menor.                      | `src/maior-menor-10.c`    |
| 06  | ✅     | Fibonacci: recebe N>0 e imprime os N primeiros termos da sequência.                   | `src/fibonacci.c`         |
| 07  | ✅     | Conta pares e ímpares: lê inteiros até um negativo e conta pares/ímpares.             | `src/conta-par-impar.c`   |
| 08  | ✅     | Divisão por subtração: calcula quociente e resto só com subtração e loop.             | `src/divisao-subtracao.c` |
| 09  | ✅     | Média de notas válidas: lê notas 0–10 até uma inválida e calcula a média das válidas. | `src/media-notas.c`       |
| 10  | ✅     | Dígitos invertidos: inverte os dígitos de um inteiro com divisões/restos/loop.        | `src/inverte-digitos.c`   |

> Legenda: ⬜ a fazer · 🔄 em andamento · ✅ concluído

---

## 🛠️ Tecnologias

Atualmente:

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-Compiler-lightgrey?style=for-the-badge)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)

Outras linguagens e tecnologias poderão ser adicionadas conforme forem utilizadas durante o curso.

---

## ▶️ Executando os códigos

É possível compilar e executar os programas de duas formas.

### Utilizando o auxiliar `compilar.c`

Na raiz do projeto, crie a pasta de saída e compile o auxiliar:

```bash
mkdir -p binarios
gcc src/auxiliar/compilar.c -o compilar
```

Depois, informe o nome do arquivo `.c` que deseja compilar. Por exemplo:

```bash
./compilar primo.c
```

O auxiliar localizará o arquivo em `src/`, compilará o programa e executará o binário gerado dentro de `binarios/`.

O uso correto do auxiliar é:

```bash
./compilar <programa.c>
```

### Compilação manual com o GCC

Para compilar manualmente um programa escrito em C, acesse a pasta `src/`:

```bash
cd src
```

Depois, compile o programa desejado:

```bash
gcc par-ou-impar.c -o par-ou-impar
```

Depois da compilação, execute:

### Linux / macOS

```bash
./par-ou-impar
```

### Windows

```bash
par-ou-impar.exe
```

---

## 🎯 Objetivo

Além de armazenar as atividades realizadas durante as aulas, este repositório tem como objetivo acompanhar minha evolução em programação.

A ideia é manter os códigos desde os exercícios mais simples até projetos mais avançados, permitindo observar a evolução das minhas habilidades ao longo da graduação.

---

## 🏫 Instituição

**Instituto Federal de Educação, Ciência e Tecnologia da Bahia — IFBA**

Material desenvolvido para fins de **estudo e aprendizado** durante as aulas da graduação.

---

## 📈 Progresso

```text
Fundamentos de C        ███░░░░░░░  Em andamento
Lógica de Programação   ███░░░░░░░  Em andamento
```

> Este README e a organização do repositório também serão atualizados conforme minha evolução durante o curso.

---

<p align="center">
  <i>Todo código complicado já foi um Hello World algum dia.</i>
</p>
