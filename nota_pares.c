/*

#include <stdio.h>
#define tamanho 5

int main () {

    int notas[tamanho];
    int i = 0;
    int maior = 0;

    printf("\n##################################");
    printf("\n##                              ##");
    printf("\n##          MAIOR NOTA          ##");
    printf("\n##                              ##");
    printf("\n##################################");

    for(i=0; i < tamanho; i++) {
        printf("\n-> Digite suas notas: ");
        scanf("%d", &notas[i]);

    if (notas[i] == 0) {
        maior = notas[i];
    }
    else {
        if (notas[i] > maior) {
            maior = notas[i];
        } 

*/



#include <stdio.h>
#define tamanho 10




int main() {

    int notas[tamanho];
    int pares = 0;
    int i = 0;
    int ppares[tamanho];
    

    printf("\n##################################");
    printf("\n##                              ##");
    printf("\n##          NOTAS PARES         ##");
    printf("\n##                              ##");
    printf("\n##################################");

    for (i = 0; i < tamanho; i++){
        printf("\n-> Digite suas notas: ");
        scanf("%d", &notas[i]);


        if (notas[i] % 2 == 0) {
            ppares[i] = notas[i];
        }


    }
    for (i = 0; i < tamanho; i++ ){
        if (notas[i] % 2 == 0) {
            printf("%d\n", ppares[i]);
        }
    }
    return 0;

}