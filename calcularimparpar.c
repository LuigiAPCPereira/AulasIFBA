#include<stdio.h>

// Calculadora de Impar e Par

int main(){
    int numero =0; // número é zero
    printf("Digite um número \n"); //printf significa que escreve uma mensagem para usuário.
    printf("Número: ");
    scanf("%d" , &numero); // scanf significa que o programa está esperando do usuário uma resposta.

    if(numero%2==0){  // Se o mod de número é 2 e ele for igual a 0 ele é par
        printf("Seu número é: ");
        printf("Par \n");
    }
    else{
        printf("Seu número é: ");
        printf("Impar \n");
    }
}