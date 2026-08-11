#include<stdio.h>
#include<math.h>


int main(){
    double a,b,c,delta,x1,x2=0;

    printf("Calculadora de Baskara - Digite os números A,B,C respectivamentes: \n");
    printf("A,B,C: ");
    scanf("%lf %lf %lf", &a,&b,&c);

    delta = (b*b) - (4*a*c);

    if(delta >0){
        x1 = (-b+ sqrt(delta)) / (2*a);
        x2 = (-b-sqrt(delta)) / (2*a);
        printf("\n A equação possui duas raizes reais e distintas: \n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }else if (delta == 0) {
        x1 = -b / (2*a);
        printf("\n A equação possui duas raizes reais e iguais: \n");
        printf("x1 = x2 = %.2lf\n", x1);
    }
    else{
        printf("\nA equação não possui raizes quadradas.\n");
    }






}