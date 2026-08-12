// Tarefa 03 (Repetição): Soma até Zero
//
// Faça um programa que leia números inteiros até digitar 0 e imprima a soma total.

#include <stdio.h>

int main() {
  int soma = 0, numero = 0;

  printf("######################################### \n##     Calculadora de Soma até Zero    ## \n#########################################\n");
  printf("\n-> Digite um número( Digite 0 para parar): ");
  scanf("%d", &numero);

  // O número 0 funciona como um sinal de parada (parar o programa).
  // Enquanto a entrada for diferente de 0, o programa soma e solicita o próximo valor.
  while (numero != 0) {
    printf("\n-> %d + %d = %d \n", soma, numero, soma + numero);
    soma = soma + numero; // Acumula o valor digitado na variável soma
    printf("\n-> Digite outro número( Digite 0 para parar): ");
    scanf("%d", &numero);
  }

  printf("\n-> A soma total é: %d\n", soma);
}
