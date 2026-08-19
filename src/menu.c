/*

Usar Switch
decimal -> binario usar mod 
binario -> decimal


*/

#include <stdio.h>
#include <math.h>


void baskara(int a, int b, int c) {

    double soma, delta, x1 , x2=0;

    delta = (b*b) - 4*a*c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nDuas raízes reais e distintas: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = - b / (2 * a);
        printf("\nUma raiz real e única: x = %.2lf\n", x1);
    } else {
        printf("\nNão tem raízes reais (delta negativo).\n");
    }}

void fibonacci(int contador) {

    int repetidor = 0, numero1 = 1, numero2 = 1, soma, ant = 0;


  printf("\n-> [INFO] Imprimindo Fórmula Fibonacci:");
  printf("\n->  ");


  for (repetidor = 0; repetidor < contador; ++repetidor) {
    printf("%d ", numero1);

    soma = numero1 + numero2;
    numero1 = numero2;
    numero2 = soma;
  }
}

void binariod(long long binario) {

    double decimal = 0; int resto = 0, expoente = 0;

    while (binario != 0){
        resto = binario % 10;
        decimal += resto * pow(2, expoente);
        binario /= 10;
        expoente++;
    }
    printf("-> O valor em decimal é: %.0f \n", decimal);

}

void decimalb(int numero) {
// mod
// dividir por / 2
    int resto, divisor = 0, binario = 0;

    if (numero > 1) {
        resto = numero / 2;
    }
    printf("%d", resto % 2);

}



int main(){
    int opcao = 0;
    printf("\n#################################\n");
    printf("##            MENU             ##\n");
    printf("##                             ##\n");
    printf("## [1] Baskara                 ##\n");
    printf("## [2] fibonacci               ##\n");
    printf("## [3] Binário para Decimal    ##\n");
    printf("## [4] Decimal para binário    ##\n");
    printf("## [5] Sair                    ##\n");
    printf("##                             ##\n");
    printf("#################################\n");
    printf("\n-> Selecione uma opção do menu: ");
    scanf("%d", &opcao);

    switch(opcao){

        case 1:
        int a, b, c = 0;
        printf("-> Digite a, b e c: ");
        scanf("%d %d %d", &a,&b,&c);
        baskara(a,b,c);
        return main();

        case 2:
        int contador = 0;
        do {
            printf("\n-> Digite um número: ");
            scanf("%d", &contador);

        if (contador <= 0) {
        printf("\n-> [ERRO] O número precisa ser maior que zero.\n");
        }
        } while (contador <= 0);
            fibonacci(contador);
            return main();

        case 3:
        long long binario;
        printf("\n-> Digite um binário: ");
        scanf("%lld", &binario);
        binariod(binario);
        return main();

        case 4:
        int numero = 0;
        printf("\n-> Digite um número: ");
        scanf("%d", &numero);
        decimalb(numero);


        case 5:
        printf("-> Tchau!");
        break;
    }

}