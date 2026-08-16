// Tarefa 09 (Repetição): Média de Notas Válidas
//
// Faça um programa que receba notas de alunos (valores entre 0 e 10)
// repetidamente até que o usuário digite uma nota inválida (fora desse
// intervalo). Ao final, imprima a média aritmética apenas das notas válidas que
// foram computadas.

#include <stdio.h>

int main() {

  float nota = 0, soma = 0, media = 0;
  int quantidade = 0;

  printf("######################################### \n##        Calculadora de "
         "Notas         ## \n#########################################\n");
  printf("\n-> Digite as notas: ");

  // O loop continua até que seja digitada uma nota inválida.
  while (1) {
    // Verifica se o usuário digitou um número antes de continuar.
    if (scanf("%f", &nota) != 1) {
      printf("\n-> [ERRO] Isso não é um número.");
      break;
    }

    // Notas fora do intervalo de 0 a 10 encerram o loop.
    if (nota < 0 || nota > 10) {
      break;
    }

    // A nota válida é adicionada à soma e à quantidade de notas.
    soma = soma + nota;
    quantidade++;
  }
  // Só calcula a média se pelo menos uma nota válida foi digitada.
  if (quantidade > 0) {
    media = soma / quantidade;
    printf("\n\n######################################### \n##        "
           "Calculadora de "
           "Notas         ## \n#########################################\n");
    printf("\n-> A média desse aluno é: %0.1f", media);
  } else {
    printf("\n-> [ERRO] A noda deve estar entre 0 e 10.");
  }
}
