#include <stdio.h>

// Soma o X e o Y.
double Soma ( double X, double Y){
    double SomaFun = X + Y;
    return SomaFun;
}

int main (){
    double X = 20;
    double Y = 3;
    double Z = 13;
    double Resultado = Soma (X,Y);
    double Resultado2 = Soma (Z,Z);

    printf ("Soma1 %lf e Soma2 %lf\n", Resultado,Resultado2);

    return 0;
}