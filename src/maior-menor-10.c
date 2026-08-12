// Tarefa 05 (Repetição): Maior e Menor de 10
//
// Faça um programa que lê 10 inteiros e informa o maior e o menor.

#include<stdio.h>

int main(){

  int numero = 0, maior = 0, menor = 0, contador = 0;

  // O loop percorre o i de 0 a 9, lendo 10 inteiros, e termina quando i é igual a 10
  for (int i = 0; i < 10; i++) {
    printf("######################################### \n##    Calculadora de Maior e Menor     ## \n");
    printf("##         Números lidos: %d/10         ##\n", i);
    printf("#########################################\n");
    printf("\n-> Digite um numero: ");
    scanf("%d", &numero);

    // Se i for 0, inicializa maior e menor com o primeiro número lido
    if(i == 0){
      maior = numero;
      menor = numero;
    }
    // Se i não for 0, compara o número lido com o maior e menor atuais
    else {
      if(numero > maior){
        maior = numero;
      }
      if(numero < menor){
        menor = numero;
      }
    }
    contador++;
  }
  printf("######################################### \n##    Calculadora de Maior e Menor     ## \n");
  printf("##         Números lidos: %d/10        ##\n", contador);
  printf("#########################################\n");
  printf("->> O Maior: %d\n", maior);
  printf("->> O Menor: %d\n", menor);

  return 0;
}