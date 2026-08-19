/*

faca um programa em c que, receba um numero do usuário inteiro e imprima sua tabuada ate o usuário digitar -1


*/
#include <stdio.h>

void tabuada(int numero) {

    int numero1 = 0, contador = 1, resultado = 0;
    printf("\n######################################### \n##             TABUADA DE %d           ## \n#########################################\n", numero);
    while (contador <= 10) {
    resultado = numero * contador;
    printf("## %d x %d = %d                         \n", numero, contador, resultado);
    contador++; // Incrementa +1 a cada volta do loop
  }
  printf("#########################################\n");

}

int main() {
    int numero = 0;

    printf("-> Digite um número: ");
    scanf("%d", &numero);

    while (numero != -1) {
        printf("\e[1;1H\e[2J");
        tabuada(numero);
        printf("Quer continuar? digite outro número(Número negátivos para sair): ");
        scanf("%d", &numero);
    } 

}

