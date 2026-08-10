#include<stdio.h>

int main(){
    int numero =0;
    printf("Digite um número \n");
    printf("Número: ");
    scanf("%d" , &numero);

    if(numero%2==0){
        printf("Seu número é: ");
        printf("Par \n");
    }
    else{
        printf("Seu número é: ");
        printf("Impar \n");
    }
}