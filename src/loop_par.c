// Tarefa Extras (Repetição): Pares de 0 até N
//
// Faça um programa que solicite ao usuário um número inteiro maior que 10 e
// imprima todos os números pares de 0 até o número digitado.

#include <stdio.h>

int main() {
  int numero = 0, repetidor = 0;

  printf("######################################### \n##    Calculadora de numeros pares     ## \n#########################################\n");

  // Estrutura do...while para garantir a regra: o número digitado precisa ser maior que 10.
  do {
    printf("\n-> Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 10) {
      printf("\n-> [ERRO] O numero deve ser maior que 10.\n");
    }
  } while (numero < 10);

  printf("\n-> [INFO] Imprimindo todos os numeros pares de 0 ate %d:\n", numero);
  printf("-> ");

  // O loop for percorre de 0 até o número digitado, imprimindo apenas os valores pares (% 2 == 0).
  for (repetidor = 0; repetidor <= numero; repetidor++) {
    if (repetidor % 2 == 0) {
      printf("%d ", repetidor);
    }
  }
  printf("\n");
}
