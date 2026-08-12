// Tarefa 03 (Condicionais): Fórmula de Bhaskara
//
// Faça um programa que calcule as raízes de uma equação do segundo grau usando
// a fórmula de Bhaskara.

#include <math.h>
#include <stdio.h>

int main() {
  double a = 0, b = 0, c = 0, x1 = 0, x2 = 0, delta = 0;

  printf("######################################### \n##       Calculadora de Bhaskara       ## \n#########################################\n");

  // Estrutura do...while para insistir até que o usuário digite um 'a' diferente de zero,
  // pois se 'a' for 0 a equação deixa de ser do 2º grau (divisão por zero na fórmula).
  do {
    printf("\n-> Digite os valores de a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
      printf("\n-> [ERRO] A equação não é do segundo grau (a não pode ser zero).\n");
    }
  } while (a == 0);

  // Cálculo do delta (b² - 4ac)
  delta = (b * b) - 4 * a * c;

  // Análise do resultado do delta para determinar as raízes:
  // 1. Delta > 0: gera duas raízes reais e diferentes
  // 2. Delta == 0: gera apenas uma raiz real
  // 3. Delta < 0: não possui raízes reais no conjunto dos números reais
  if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("\n-> As raízes são: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    printf("\n-> Portanto, a equação tem duas raízes reais e distintas.");

  } else if (delta == 0) {
    x1 = (-b / (2 * a));
    printf("\n-> A raiz é: x = %.2lf\n", x1);
    printf("\n-> Portanto, a equação tem uma raiz real e única.");

  } else {
    printf("\n-> A equação não tem raízes reais.\n");
  }
}
