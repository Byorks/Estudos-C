# include <stdio.h>
# include <stdlib.h>

int main(){
    double A,B,C,Media,Soma,MultiA,MultiB,MultiC;
    int IntervaloA = 0;
    int IntervaloB = 10;
    // Criar variaveis com inteção de facilmente modificar, para facilitar futuros reajustes.

    scanf("%lf",&A);
    if(A >IntervaloA || A <IntervaloB){
        printf("Digite um valor entre 0 e 10.\n");
        exit(1);
    }
    
    scanf("%lf",&B);
    if(B >IntervaloA || B <IntervaloB){
        printf("Digite um valor entre 0 e 10.\n");
        exit(1);
    }

    scanf("%lf",&C);
    if(C >IntervaloA || C <IntervaloB){
        printf("Digite um valor entre 0 e 10.\n");
        exit(1);
    }
       
       
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