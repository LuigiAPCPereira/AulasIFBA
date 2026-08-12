// Tarefa 07 (Repetição): Conta Pares e Ímpares
//
// Faça um programa que receba números inteiros
// sucessivamente até que o usuário digite um número negativo, e ao final
// imprima quantos números pares e quantos números ímpares foram digitados.

#include <stdio.h>

int main() {
    int pares = 0, impares = 0, numero = 0;

    printf("######################################### \n##     Contador de Pares e Ímpares     ## \n#########################################\n");

    // Lê números inteiros sucessivamente até que um valor negativo seja digitado.
    while (1) {
        printf("\n-> Digite um número inteiro (ou um negativo para sair): ");
        scanf("%d", &numero);

        // Um número negativo funciona como sinal de parada.
        if (numero < 0) {
            break;
        }

        // O operador de resto % 2 determina se o número é par (resto 0) ou ímpar.
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\n######################################### \n##               RESULTADO             ## \n#########################################\n");
    printf("->> Total de números pares: %d\n", pares);
    printf("->> Total de números ímpares: %d\n", impares);

    return 0;
}
