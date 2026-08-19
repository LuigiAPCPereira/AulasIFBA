# AulasIFBA

Repositório que utilizo para guardar exercícios e atividades de programação desenvolvidos durante meus estudos em **Análise e Desenvolvimento de Sistemas no IFBA**.

Atualmente estou estudando **C** como primeira linguagem da graduação. Os exercícios aqui acompanham os conteúdos vistos em aula e minha evolução ao longo do curso.

## Organização

- `src/` — exercícios e atividades em C;
- `src/auxiliar/` — código auxiliar usado durante os estudos;
- `src/menu.c` — atividade desenvolvida durante uma aula, ainda não revisada e que será refeita posteriormente;
- `docs/notas-de-estudo.md` — notas pessoais de estudo e consulta.

## Compilação

Um exercício pode ser compilado diretamente com o GCC. Por exemplo:

```bash
gcc src/primo.c -o primo
./primo
```

Alguns programas podem precisar de opções adicionais. O exercício de Bhaskara, por exemplo, utiliza `math.h`:

```bash
gcc src/bhaskara.c -o bhaskara -lm
```

## Autoria e apoio de IA

**Os códigos `.c` deste repositório são escritos por mim como parte dos meus estudos e exercícios.**

A documentação e a organização textual do repositório podem utilizar ferramentas de IA como apoio, a partir de conteúdos que estudei, pesquisei e pratiquei. Esse apoio não representa autoria dos códigos nem substitui o processo de aprendizagem registrado aqui.

## Instituição

**Instituto Federal de Educação, Ciência e Tecnologia da Bahia — IFBA**  
Curso: **Análise e Desenvolvimento de Sistemas**
