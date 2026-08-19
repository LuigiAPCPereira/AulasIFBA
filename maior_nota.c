
#include <stdio.h>
#define tamanho 5


void coletar_nota (int notas[]) {
    int i = 0, maior = 0;
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
    }
    }   

}



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
    }
    }
    printf("\n##################################");
    printf("\n##                              ##");
    printf("\n##          MAIOR NOTA          ##");
    printf("\n##                              ##");
    printf("\n##################################");
    printf("\n-> A maior nota é %d \n", maior);
}