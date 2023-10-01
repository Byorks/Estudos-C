#include <stdio.h>

int main(){
    int testes;
    double X1,X2,X3,CalcP = 0;

    scanf("%d", &testes);

    for(int i = 0; i < testes; i++){
        scanf("%lf %lf %lf",&X1,&X2,&X3);
            
            X1 = X1 * 2;
            X2 = X2 * 3;
            X3 = X3 * 5;
            CalcP = X1 + X2 + X3;
            CalcP = CalcP / 10;

            /// Calcule e mostre tantos(Testes)
            printf("%.2lf\n",CalcP);
    }

    return 0;
}