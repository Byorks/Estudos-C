# include <stdio.h>


int main(){
    double A,B,C,Media,Soma,MultiA,MultiB,MultiC;

    scanf("%lf",&A);
    
    scanf("%lf",&B);

    scanf("%lf",&C);
       
    // Multiplicar A pelo peso 2
    MultiA = A * 2;

    // Mult. B pelo peso 3
    MultiB = B * 3;

    // Mult. C pelo peso 5
    MultiC = C * 5;

    //Somar o res. das multiplicações
    Soma = MultiA + MultiB + MultiC;

    //dividir pela soma dos Pesos = 10, será a media
    Media = Soma / 10;

    //print media
    printf("MEDIA = %.1lf\n", Media);

    return 0;
}