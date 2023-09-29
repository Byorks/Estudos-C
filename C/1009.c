#include <stdio.h>

int main(){
    double salariodfix = 0, vendas = 0, salariotot = 0;
    char nome[10];

    //digite o nome
    scanf("%s", nome);

    // digite o salario fixo
    scanf("%lf", &salariodfix);

    // digite o quanto vendeu, 15% será do vendedor;
    scanf("%lf", &vendas);
    vendas = vendas * 15; 
    vendas = vendas / 100;

    // calcule o total e mostre
    salariotot = vendas + salariodfix;
    printf("TOTAL = R$ %.2lf\n", salariotot);

    return 0;
}