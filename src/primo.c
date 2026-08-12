// Tarefa 01 (Repetição): Número Primo
//
// Faça um programa que receba um número inteiro positivo e diga se ele é primo.

#include <stdio.h>

int main() {
  int numero = 0, divisor = 2;

  printf("######################################### \n##    Calculadora de Números Primos    ## \n#########################################\n");

  // O do...while garante que o usuário digite pelo menos uma vez e insista até vir um número positivo.
  do {
    printf("\n-> Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
      printf("\n-> O número deve ser positivo.\n");
    }
  } while (numero < 0);

  // Por definição, números menores ou iguais a 1 não são primos.
  if (numero <= 1) {
    printf("\n-> O número %d não é primo.\n", numero);

  } else {
    // Um número primo só é divisível por 1 e por ele mesmo.
    // Teste dos divisores a partir de 2 até (numero - 1).
    while (divisor < numero) {
      if (numero % divisor == 0) {
        // Caso exista qualquer divisor com resto 0, ele NÃO é primo.
        // O break cancela o loop imediatamente para economizar processamento.
        printf("\n-> O número %d não é primo.\n", numero);
        break;
      }
      divisor++;
    }

    // Se o loop terminou e o divisor chegou até o próprio número, ele é primo.
    if (divisor == numero) {
      printf("\n-> O número %d é primo.\n", numero);
    }
  }
}
