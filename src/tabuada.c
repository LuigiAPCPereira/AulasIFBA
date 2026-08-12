// Tarefa 04 (Repetição): Calculadora de Tabuada
//
// Faça um programa que receba um número inteiro e imprima a tabuada de 1 a 10 com loop.

#include <stdio.h>

int main() {
  int numero = 0, contador = 1, resultado = 0;

  printf("######################################### \n##       Calculadora de Tabuada        ## \n#########################################\n");
  printf("\n-> Digite um número: ");
  scanf("%d", &numero);

  printf("\n######################################### \n##             TABUADA DE %d           ## \n#########################################\n", numero);

  // O contador começa em 1 e vai até 10, multiplicando o número informado em cada passo.
  while (contador <= 10) {
    resultado = numero * contador;
    printf("## %d x %d = %d\n", numero, contador, resultado);
    contador++; // Incrementa +1 a cada volta do loop
  }
  printf("#########################################\n");
}
