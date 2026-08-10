#include<stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Digite um lados de um triangulo: \n");
    printf("Lado A, B, C: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a+b+c==180){
        printf("É um triangulo! \n");
    }
    else{
        printf("Não é um triangulo :( \n");
    }


}