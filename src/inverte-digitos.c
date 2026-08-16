// Tarefa 10 (Repetição): Dígitos Invertidos
//
// Faça um programa que receba um número inteiro positivo e imprima esse número
// com os dígitos invertidos utilizando divisões inteiras, restos e um loop.

#include <stdio.h>

int main() {
  int numero = 0, resto = 0, invertido = 0, quantidade = 0;

  printf("######################################### \n##  Calculadora de "
         "Dígitos invertidos  ## "
         "\n#########################################\n");
  do {
    printf("\n-> Digite um número: ");
    if (scanf("%d", &numero) != 1) {
      printf("\n-> [ERRO] Somente números são aceitos.\n");
      return 0;
    }

    if (numero <= 0) {
      printf("\n-> [ERRO] Digite um número positivo.\n");
    }
  } while (numero <= 0);

  /*
      % 10 pega o último algarismo do número e / 10 tira esse algarismo.

      Para 743, pegamos 3, depois 4 e depois 7.
      Para colocar cada novo algarismo no final do resultado, multiplicamos
      invertido por 10 antes de somar o valor de resto:

      invertido = 0  ->  3  ->  34  ->  347
  */
  while (numero > 0) {
    resto = numero % 10;
    invertido = invertido * 10 + resto;
    numero = numero / 10;
    quantidade++;
  }

  // Usa a quantidade de algarismos para mostrar zeros no começo do resultado.
  // Assim, 520 aparece como 025 em vez de apenas 25.
  printf("\n-> Número invertido:  %0*d", quantidade, invertido);
}
