// Tarefa 01 (Condicionais): Par ou Ímpar
//
// Faça um programa que determine se um número é par ou ímpar.

#include <stdio.h>

int main() {
  int numero = 0;

  printf("######################################### \n##     Calculadora de Par ou Ímpar     ## \n#########################################\n");
  printf("\n-> Digite um número: ");
  scanf("%d", &numero);

  // O operador % pega o resto da divisão por 2.
  // Se o resto for 0, o número é Par; se sobrar 1, é Ímpar.
  if (numero % 2 == 0) {
    printf("\n-> O número %d é par.", numero);
  } else {
    printf("\n-> O número %d é ímpar.", numero);
  }
}
