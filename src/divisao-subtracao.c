// Tarefa 08 (Repetição): Divisão por Subtração
//
// Faça um programa que receba dois números inteiros positivos (dividendo e
// divisor) e calcule o quociente e o resto da divisão inteira utilizando apenas
// operações de subtração e estruturas de repetição.

#include <stdio.h>

int main() {

  int dividendo = 0, divisor = 0, quociente = 0, resto = 0;

  printf("######################################### \n##      Calculadora de "
         "Quociente       ## \n#########################################\n");
  do {
    printf("\n-> Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("\n-> Digite o divisor: ");
    scanf("%d", &divisor);

    if (dividendo <= 0 || divisor <= 0) {
      printf("\n-> [ERRO] Os números devem ser positivos\n");
    }
  } while (dividendo <= 0 || divisor <= 0);
  printf("\n\n-> Resultados\n");

  // Esse loop  inicializa o resto com o valor do dividendo. Enquanto o resto
  // for maior ou igual ao divisor, o divisor será subtraído do resto e o
  // quociente será incrementado. Quando o resto for menor que o divisor, o loop
  // será encerrado.
  for (resto = dividendo; resto >= divisor;) {
    printf("\n| %d - %d = %d", resto, divisor, resto - divisor);
    resto = resto - divisor;
    quociente++;
  }
  printf("\n\nResto: %d \t| Quociente: %d ", resto, quociente);
}
