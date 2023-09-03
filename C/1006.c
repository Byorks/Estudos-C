# include <stdio.h>
# include <stdlib.h>

int main(){
    double A,B,C,Media,Soma,MultiA,MultiB,MultiC;

    scanf("%lf",&A);
    if(A >10 || A <0){
        printf("Digite um valor entre 0 e 10.\n");
        exit(1);
    }
    
    scanf("%lf",&B);
    if(B >10 || B <0){
        printf("Digite um valor entre 0 e 10.\n");
        exit(1);
    }

        scanf("%lf",&C);
    if(C >10 || C <0){
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