#include <stdio.h>
#include <math.h>

int pausa = 0;

int baskara() {
    int a, b, c = 0;
    double x1,x2,delta = 0;
    printf("\e[1;1H\e[2J");
    do {
        printf("\n-----------<CALCULADORA DE BASKARA>-----------");
        printf("\n-> Digite os valores de A, B e C: ");
        scanf("%d %d %d", &a,&b,&c);

        if (a==0) {
            printf("\n-> [ERRO] A equação não é do segundo grau( 'A' não pode ser zero ).\n");
        }
    } while (a==0);    
    delta = (b*b) - 4 * a * c;

    if (delta > 0) {
        x1 = (-b+sqrt(delta)) / (2*a);
        x2 = (-b-sqrt(delta)) / (2*a);
        printf("\n\n└─> As raizes são x1 = %.2lf\t x2 = %.2lf", x1,x2);
        printf("\n└─> Portanto, a equação tem duas raízes reais e distintas.");
    } else if (delta == 0) {
        x1 = (-b/(2*a));
        printf("\n\n└─> A raiz é x = %.2lf\n", x1);
        printf("\n└─> Portanto, a equação tem uma raiz real e única.");
    } else {
        printf("\n└─> Que pena, a equação não tem raízes reais.\n");
    }
    printf("\n-> Digite qualquer número para voltar ao menu: ");
      scanf("%d", &pausa);
};


int main () {
    int opcao = 0;
    do {
        printf("\e[1;1H\e[2J");
        printf("\n##################################");
        printf("\n##                              ##");
        printf("\n##          CALCULADORA         ##");
        printf("\n##                              ##");
        printf("\n## (1) Tabuada                  ##");
        printf("\n## (2) Somar ate Zero           ##");
        printf("\n## (3) Maiores e Menores        ##");
        printf("\n## (4) Par e Impar              ##");
        printf("\n## (5) Números Pares            ##");
        printf("\n## (6) Números Primos           ##");
        printf("\n## (7) Divisão                  ##");
        printf("\n## (8) Divisivel                ##");
        printf("\n## (9) Fatorial                 ##");
        printf("\n## (10) Baskara                 ##");
        printf("\n## (11) Fibonacci               ##");
        printf("\n## (12) Binário para Decimal    ##");
        printf("\n## (13) Decimal para Binário    ##");
        printf("\n## (14) Sair                    ##");
        printf("\n##                              ##");
        printf("\n##################################");

        printf("\n\n-> Digite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {};
            case 2: {}; 
            case 3: {};
            case 4: {};
            case 5: {};
            case 6: {};
            case 7: {};
            case 8: {};
            case 9: {};
            case 10: {
                baskara();
            };
            case 12: {};
            case 13: {};
            case 14: {};
            
        };
        
    } while (opcao != 14);
    
    return 0;
}
