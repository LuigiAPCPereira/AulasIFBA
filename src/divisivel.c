// Tarefa 05 (Condicionais): Divisibilidade
//
// Faça um programa que verifique se um número é divisível por outro.

#include <stdio.h>

int main() {
  int num1 = 0, num2 = 0;

  printf("######################################### \n##     Calculadora de Divisibilidade    ## \n#########################################\n");

  // Loops do...while separados para validar cada entrada.
  // Assim, se o usuário errar o divisor, ele não precisa digitar o primeiro número novamente.
  do {
    printf("\n->Digite o numero a ser divisivel: ");
    scanf("%d", &num1);

    if (num1 <= 0) {
      printf("\n->[ERRO] Digite um numero positivo!\n");
    }
  } while (num1 <= 0);

  do {
    printf("\n->Digite o divisor: ");
    scanf("%d", &num2);

    if (num2 <= 0) {
      printf("\n->[ERRO] Digite um numero positivo!\n");
    }
  } while (num2 <= 0);

  // Se o resto da divisão (num1 % num2) for zero, significa que a divisão é exata.
  if (num1 % num2 == 0) {
    printf("\n->O numero %d é divisivel por %d\n", num1, num2);
  } else {
    printf("\n->O numero %d não é divisivel por %d\n", num1, num2);
  }

  return 0;
}
