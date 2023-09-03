// Fazer um programa que execute todas as operações matematicas e exibir em tela.
#include <stdio.h>

int main (){
    double X = 20;
    double Y = 3;

    int Soma = X + Y;
    printf ("%d\n", Soma);

    int Sub = X - Y;
    printf ("%d\n", Sub);

    float Multi = X * Y;
    printf ("%f\n" ,Multi);

// .2 Limita o número de casas a serem mostradas.
    //double Div = X / 3.0;
    double Div = X / Y;
    printf ("%.2lf\n", Div);

return 0;
} 
