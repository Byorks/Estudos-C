# include <stdio.h>

int main(){
    double A,B,Media,Soma,MultiA,MultiB;
    
    //como criar loob de repetição...
    scanf("%lf",&A);
    
    scanf("%lf",&B);
       
    // Multiplicar A pelo peso 3.5
    MultiA = A * 3.5;

    // Mult. B pelo peso 7.5
    MultiB = B * 7.5;

    //Somar o res. das multiplicações
    Soma = MultiA + MultiB;

    //dividir pela soma dos Pesos = 11, será a media
    Media = Soma / 11;

    //print media
    printf("MEDIA = %.5lf\n", Media);

    return 0;
}