// Tarefa 02 (Condicionais): Triângulo Válido
//
// Faça um programa que solicite ao usuário os valores dos ângulos de um triângulo
// e determine se ele é um triângulo válido.

#include <stdio.h>

int main() {
  float a = 0, b = 0, c = 0;

  printf("######################################### \n##     Calculadora de Triângulo     ## \n#########################################\n");
  printf("\n-> Digite os valores respectivamente dos ângulos de um triângulo(A, B, C): ");
  scanf("%f %f %f", &a, &b, &c);

  // Regra da geometria: a soma dos três ângulos internos de qualquer triângulo deve ser exatamente 180°.
  if (a + b + c == 180) {
    printf("\n-> O triângulo é válido.\n");
  } else {
    printf("\n-> O triângulo não é válido.\n");
  }
}
