# include <stdio.h>
# include <stdlib.h>

int main(){
    double A,B,Media,Soma,MultiA,MultiB;

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