// Tarefa 06 (Repetição): Sequência de Fibonacci
//
// Faça um programa que receba um número inteiro positivo e imprima os primeiros
// N termos da sequência de Fibonacci.

#include <stdio.h>

int main() {
  int contador = 0, numero = 0, numero2 = 1, repetidor = 0, soma = 0;

  printf("######################################### \n##        Calculadora "
         "Fibonacci        ## \n#########################################\n");

  do {
    printf("\n-> Digite um número: ");
    scanf("%d", &contador);

    if (contador <= 0) {
      printf("\n-> [ERRO] O número precisa ser maior que zero.\n");
    }

  } while (contador <= 0);

  printf("\n-> [INFO] Imprimindo Fórmula Fibonacci:");
  printf("\n-> ");

  /*
      Um loop em que o repetidor é igual a 0 e só vai parar quando o repetidor
      for menor que o N digitado pelo usuário.*/

  for (repetidor = 0; repetidor < contador; ++repetidor) {
    printf("%d ", numero);

    // A soma representa o próximo termo da sequência.
    // Depois, numero recebe o antigo numero2, e numero2 recebe a soma,
    // fazendo os valores avançarem para a próxima repetição.

    soma = numero + numero2;
    numero = numero2;
    numero2 = soma;
  }
}
