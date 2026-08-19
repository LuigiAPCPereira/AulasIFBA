/*
    Tarefa

Criar um menu onde o usuário pode escolher entre as opcoes:
Baskara, fibonacci, binário para decimal e decimal para binário
e realizar calculos das respectivas opcoes.
*/

#include <math.h>
#include <stdio.h>

// Baskara
void baskara(int a, int b, int c) {

  double soma, delta, x1, x2 = 0;

  delta = (b * b) - 4 * a * c;

  if (delta > 0) {

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("\n   └─> Duas razes reais e distintas: x1 = %.2lf e x2 = %.2lf\n",
           x1, x2);
  } else if (delta == 0) {

    x1 = (double)-b / (2 * a);

    printf("\n   └─> Uma raiz real e única: x = %.2lf\n", x1);
  } else {
    printf("\n   └─> Não tem raizes reais (delta negativo)");
  }
}

// Fibonacci
void fibonacci(int contador) {

  int repetidor, numero1 = 0, numero2 = 1, soma, ant = 0;

  if (contador <= 0) {
    printf("\n-> [ERRO] O número precisa ser maior que zero.\n");
  }
  printf("\n-> [INFO] Imprimindo Fórmula Fibonacci:");
  printf("\n      └─> ");

  for (repetidor = 0; repetidor < contador; ++repetidor) {
    printf("%d ", numero1);
    soma = numero1 + numero2;
    numero1 = numero2;
    numero2 = soma;
  }
}

void binario_para_decimal(long long binario) {
  double decimal = 0;
  int resto = 0, expoente = 0;

  while (binario != 0) {
    resto = binario % 10;
    decimal += resto * pow(2, expoente);
    binario /= 10;
    expoente++;
  }
  printf("└─> O valor em decimal é: %.0f \n", decimal);
}

void decimal_para_binario(int decimal) {
  if (decimal == 0) {
    printf("\n-> Não pode ser igual a zero");
    return;
  }
  int binario = 0, base = 1;
  int temp = decimal;

  while (temp > 0) {
    int resto = temp % 2;
    binario += resto * base;
    base *= 10;
    temp /= 2;
  }
  printf("└─> O valor em binário é: %d \n", binario);
}

int main() {
  int opcao = 0;
  printf("\e[1;1H\e[2J");
  printf("\n################################################");
  printf("\n##                                            ##");
  printf("\n##                CALCULADORA                 ##");
  printf("\n##                                            ##");
  printf("\n## (1) Calcular baskara                       ##");
  printf("\n## (2) Calcular fibonacci                     ##");
  printf("\n## (3) Calcular binário para decimal          ##");
  printf("\n## (4) Calcular decimal para binário          ##");
  printf("\n## (5) Sair.                                  ##");
  printf("\n##                                            ##");
  printf("\n################################################");

  printf("\n-> Selecione uma opção do menu: ");
  scanf("%d", &opcao);

  switch (opcao) {

  case 1: {
    int a, b, c = 0;
    printf("\e[1;1H\e[2J");
    printf("\n################################################");
    printf("\n##                                            ##");
    printf("\n##           CALCULADORA DE BASKARA           ##");
    printf("\n##                                            ##");
    printf("\n################################################");

    printf("\n\n-> Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);
    baskara(a, b, c);
    printf("\n\n-> Digite 0 para voltar: ");
    scanf("%d", &opcao);
    if (opcao == 0) {
      return main();
    }
    break;
  }

  case 2: {
    int contador = 0;
    printf("\e[1;1H\e[2J");
    printf("\n################################################");
    printf("\n##                                            ##");
    printf("\n##          CALCULADORA DE FIBONACCI          ##");
    printf("\n##                                            ##");
    printf("\n################################################");

    printf("\n\n-> Digite um número: ");
    scanf("%d", &contador);
    fibonacci(contador);
    printf("\n\n-> Digite 0 para voltar: ");
    scanf("%d", &opcao);
    if (opcao == 0) {
      return main();
    }
    break;
  }
  case 3: {
    long binario = 0;
    printf("\e[1;1H\e[2J");
    printf("\n################################################");
    printf("\n##                                            ##");
    printf("\n##          CALCULADORA DE BINÁRIO            ##");
    printf("\n##                PARA DECIMAL                ##");
    printf("\n################################################");

    printf("\n\n-> Digite um número binário: ");
    scanf("%ld", &binario);
    binario_para_decimal(binario);
    printf("\n\n-> Digite 0 para voltar: ");
    scanf("%d", &opcao);
    if (opcao == 0) {
      return main();
    }
    break;
  }
  case 4: {
    int decimal = 0;
    printf("\e[1;1H\e[2J");
    printf("\n################################################");
    printf("\n##                                            ##");
    printf("\n##          CALCULADORA DE DECIMAL            ##");
    printf("\n##                PARA BINÁRIO                ##");
    printf("\n################################################");

    printf("\n\n-> Digite um número decimal: ");
    scanf("%d", &decimal);
    decimal_para_binario(decimal);
    printf("\n\n-> Digite 0 para voltar: ");
    scanf("%d", &opcao);
    if (opcao == 0) {
      return main();
    }
    break;
  }
  case 5: {
    printf("\e[1;1H\e[2J");
    printf("\n################################################");
    printf("\n##                                            ##");
    printf("\n##            Até a próxima! Tchau!           ##");
    printf("\n##                                            ##");
    printf("\n################################################\n");
    return 0;
  }
  }
}
