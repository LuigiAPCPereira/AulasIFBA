// Tarefa 04 (Condicionais): Idade para Voto
//
// Faça um programa que verifique se uma pessoa pode votar com base na sua idade.

#include <stdio.h>

int main() {
  int idade = 0;

  printf("######################################### \n##   Calculadora de Idade para Voto    ## \n#########################################\n");
  printf("\n-> Digite sua idade: ");
  scanf("%d", &idade);

  // Verificação das faixas de idade de acordo com as regras de votação no Brasil:
  // 1. Idade negativa: entrada inválida
  // 2. Menor que 16 anos: não pode votar
  // 3. Entre 18 e 70 anos (inclusive): voto obrigatório
  // 4. De 16 a 17 anos ou maior que 70 anos: voto facultativo
  if (idade < 0) {
    printf("\n-> Você ainda nem nasceu.\n");
  } else {
    if (idade < 16) {
      printf("\n-> Você ainda é um bebê. Não pense em votar ainda, curta a vida.\n");
    } else if (idade >= 18 && idade <= 70) {
      printf("\n-> Você pode e deve votar.\n");
    } else {
      printf("\n-> Seu voto é facultativo, portanto não tem obrigatoriedade para votar.\n");
    }
  }
}
