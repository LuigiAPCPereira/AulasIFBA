#include <stdio.h>
#define tamanho 10



int main(){
    int maior = 0;
    float soma = 0;
    float media = 0;
    int notas[tamanho];
    int maiores[tamanho];
    int i = 0;
    int quantidade = 0;
    

    for(i=0; i < tamanho; i++) {
        printf("\n-> Digite suas notas: ");
        scanf("%d", &notas[i]);

        soma = soma + notas[i];
        quantidade++;

        media = soma / quantidade;
        if (notas[i] > media) {
            maiores[i] = notas[i];
            }
    }

    printf("Soma: %.0f, Media: %.1f, Notas Maiores que a média: %d \n", soma, media, maiores[i]);
}