// Tarefa 02 (Repetição): Fatorial
//
// Faça um programa que receba um número inteiro positivo e calcule o seu fatorial.

#include <stdio.h>

int main() {
  // Inicializado fatorial = 1 porque o 1 é o elemento neutro da multiplicação.
  // Se fosse inicializado com 0, qualquer multiplicação resultaria em 0.
  int numero = 0, fatorial = 1;

  printf("######################################### \n##       Calculadora de Fatorial       ## \n#########################################\n");
  printf("\n-> Digite um número: ");
  scanf("%d", &numero);

  // O loop for multiplica consecutivamente: 1 × 2 × 3 × ... × N
  for (int i = 1; i <= numero; i++) {
    fatorial *= i;
  }

  printf("\n-> O fatorial de %d é %d.\n", numero, fatorial);
}
