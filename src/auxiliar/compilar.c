// Auxiliar: Compilador e Executor GCC
//
// Um simples programa para compilar e executar outros programas em C sem ter
// que digitar o caminho completo usando GCC.

#include <stdio.h>  // Biblioteca de entrada e saída padrão
#include <stdlib.h> // Biblioteca do sistema operacional (usada para a função system)

// argc (argument count): quantidade de parâmetros digitados ao chamar o programa.
// argv (argument vector): vetor contendo os textos passados no terminal.
// Exemplo de uso: ./compilar bhaskara.c (argc = 2, argv[1] = "bhaskara.c")
int main(int argc, char *argv[]) {
  char comando[256];

  // Verifica se o usuário informou exatamente 1 parâmetro extra (o nome do arquivo .c).
  if (argc != 2) {
    printf("-> Uso correto: ./compilar <programa.c>\n");
  } else {
    // Monta o comando do terminal para compilar o arquivo dentro de src/
    // e executar o binário gerado dentro da pasta binarios/.
    sprintf(
      comando,
      "gcc src/%s -o binarios/%s && ./binarios/%s",
      argv[1],
      argv[1],
      argv[1]
    );

    // Executa o comando montado no terminal do sistema operacional.
    system(comando);
  }
}
