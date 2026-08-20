
#include <stdio.h>

#define TAMANHO_MAX 100 // capacidade máxima do vetor de notas

int tamanho = 10; // quantidade de notas "ativa", editável no programa

int main() {

  int notas[TAMANHO_MAX];
  int i = 0;
  int opcao = 0;
  int pausa = 0; // usada só para pausar a tela, sem mexer em "opcao"

  do {
    printf("\e[1;1H\e[2J");
    printf("\n##################################");
    printf("\n##                              ##");
    printf("\n##          CALCULADORA         ##");
    printf("\n##            DE NOTAS          ##");
    printf("\n##                              ##");
    printf("\n## (1) calcular maior nota      ##");
    printf("\n## (2) calcular notas pares     ##");
    printf("\n## (3) calcular soma das notas  ##");
    printf("\n## (4) calcular média das notas ##");
    printf("\n## (5) notas maiores que a média##");
    printf("\n## (8) Editar limite de notas   ##");
    printf("\n## (9) Sair                     ##");
    printf("\n##                              ##");
    printf("\n## [?] Limite Atual: %d         ##", tamanho);
    printf("\n##                              ##");
    printf("\n##################################");

    printf("\n-> Digite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      // Definir novo limite de notas
    case 8: {
      int novo;
      printf("\e[1;1H\e[2J");
      printf("\n-----------<EDITAR LIMITE DE NOTAS>-----------");
      printf("\n-> Quantas notas você quer poder digitar? (máximo %d): ",
             TAMANHO_MAX);
      scanf("%d", &novo);
      if (novo > 0 && novo <= TAMANHO_MAX) {
        tamanho = novo;
        printf("\n[OK] Pronto! Agora você pode digitar até %d notas.\n",
               tamanho);
      } else {
        printf("\n[ERRO] Digite um número entre 1 e %d.\n", TAMANHO_MAX);
      }
      printf("\n-> Digite qualquer número para voltar ao menu: ");
      scanf("%d", &pausa);
      break;
    }

      // Calcular maior nota
    case 1: {
      int maior = -1; // qualquer nota real será maior que -1
      printf("\e[1;1H\e[2J");
      printf("\n-----------<MAIOR NOTA>-----------");
      printf("\n-> Vamos lá! Digite suas %d notas, uma de cada vez:\n\n",
             tamanho);
      for (i = 0; i < tamanho; i++) {
        printf("  Nota %d de %d: ", i + 1, tamanho);
        scanf("%d", &notas[i]);
        if (i == 0 || notas[i] > maior) {
          maior = notas[i];
        }
      }

      printf("\e[1;1H\e[2J");
      printf("\n-----------<MAIOR NOTA>-----------");
      printf("\n\n└─> A maior nota que você digitou foi: %d\n", maior);
      printf("\n-> Digite qualquer número para voltar ao menu: ");
      scanf("%d", &pausa);
      break;
    }

      // Calcular notas pares
    case 2: {
      int existeNotaPar = 0;
      printf("\e[1;1H\e[2J");
      printf("\n-----------<NOTAS PARES>-----------");
      printf("\n-> Vamos lá! Digite suas %d notas, uma de cada vez:\n\n",
             tamanho);
      for (i = 0; i < tamanho; i++) {
        printf("  Nota %d de %d: ", i + 1, tamanho);
        scanf("%d", &notas[i]);
      }
      printf("\e[1;1H\e[2J");
      printf("\n-----------<NOTAS PARES>-----------");
      printf("\n\n└─> Suas notas pares são: ");
      for (i = 0; i < tamanho; i++) {
        if (notas[i] % 2 == 0) {
          printf("%d ", notas[i]);
          existeNotaPar = 1;
        }
      }
      if (!existeNotaPar) {
        printf("nenhuma nota par foi digitada.");
      }
      printf("\n\n-> Digite qualquer número para voltar ao menu: ");
      scanf("%d", &pausa);
      break;
    }

      // Calcular soma das notas
    case 3: {
      int soma = 0;
      printf("\e[1;1H\e[2J");
      printf("\n-----------<SOMA DAS NOTAS>-----------");
      printf("\n-> Vamos lá! Digite suas %d notas, uma de cada vez:\n\n",
             tamanho);
      for (i = 0; i < tamanho; i++) {
        printf("  Nota %d de %d: ", i + 1, tamanho);
        scanf("%d", &notas[i]);

        soma = soma + notas[i];
      }
      printf("\e[1;1H\e[2J");
      printf("\n-----------<SOMA DAS NOTAS>-----------");
      printf("\n\n└─> A soma de todas as suas notas é: %d\n", soma);
      printf("\n-> Digite qualquer número para voltar ao menu: ");
      scanf("%d", &pausa);
      break;
    }

      // Calcular média das notas
    case 4: {
      float soma = 0, media = 0;
      printf("\e[1;1H\e[2J");
      printf("\n-----------<MÉDIA DAS NOTAS>-----------");
      printf("\n-> Vamos lá! Digite suas %d notas, uma de cada vez:\n\n",
             tamanho);
      for (i = 0; i < tamanho; i++) {
        printf("  Nota %d de %d: ", i + 1, tamanho);
        scanf("%d", &notas[i]);

        soma = soma + notas[i];
      }
      media = soma / tamanho;
      printf("\e[1;1H\e[2J");
      printf("\n-----------<MÉDIA DAS NOTAS>-----------");
      printf("\n\n└─> A sua média é: %.2f\n", media);
      printf("\n-> Digite qualquer número para voltar ao menu: ");
      scanf("%d", &pausa);
      break;
    }

      // Calcular notas maiores que a média
    case 5: {
      float soma = 0, media = 0;
      int existeNotaMaior = 0;
      printf("\e[1;1H\e[2J");
      printf("\n-----------<NOTAS ACIMA DA MÉDIA>-----------");
      printf("\n-> Vamos lá! Digite suas %d notas, uma de cada vez:\n\n",
             tamanho);
      for (i = 0; i < tamanho; i++) {
        printf("  Nota %d de %d: ", i + 1, tamanho);
        scanf("%d", &notas[i]);
        soma += notas[i];
      }
      media = soma / tamanho;
      printf("\e[1;1H\e[2J");
      printf("\n-----------<NOTAS ACIMA DA MÉDIA>-----------");
      printf("\n\n└─> Sua média foi %.2f. Notas acima da média: ", media);
      for (i = 0; i < tamanho; i++) {
        if (notas[i] > media) {
          printf("%d ", notas[i]);
          existeNotaMaior = 1;
        }
      }
      if (!existeNotaMaior) {
        printf("nenhuma nota ficou acima da média.");
      }
      printf("\n\n-> Digite qualquer número para voltar ao menu: ");
      scanf("%d", &pausa);
      break;
    }
    case 9: {
      printf("\n-> Encerrando o programa. Até a próxima!\n");
      break;
    }
    }
  } while (opcao != 9);

  return 0;
}
