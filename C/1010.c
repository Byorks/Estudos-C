#include <stdio.h>
 
int main() {
    int iten1, iten2, quant1,quant2;
    double dinheiro = 0, tot1 = 0, tot2 = 0, totdeverdade1,totdeverdade2, totot;
 
    scanf("%d %d %lf" ,&iten1,&quant1,&tot1);
    
    scanf("%d %d %lf" ,&iten2,&quant2,&tot2);
    
    totdeverdade1 = quant1 * tot1;
    
    totdeverdade2 = quant2 * tot2;

    totot = totdeverdade1 + totdeverdade2;

    printf("VALOR A PAGAR: R$ %.2lf\n",totot);
    
    return 0;
}