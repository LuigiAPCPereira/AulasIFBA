/*
receber 5 numeros do usuário inteiros, e vão ordenar em ordem crescente bubble sort 
*/

#include <stdio.h>
#define tamanho 5


int main() {
    int crescente[tamanho];
    int resultado[tamanho];
    int numero[tamanho];
    int i = 0;
    int i2 = 0;
    for (i=0; i < tamanho; i++) {
        printf("-> Digite um número: ");
        scanf("%d", &numero[i]);
    }
    
    for (i = 0; i < tamanho - 1; i++) {
        for (i2=0; i2 < tamanho - 1; i2++) {
            if (numero[i2] > numero[i]) {
                numero[i] = numero[i2];
                printf("%d", numero[i]);
            }
        }

    }


}