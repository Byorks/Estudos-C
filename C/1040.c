# include <stdio.h>

// Multiplica o parametro A pelo par. B
double Multi (double A, double B){
    double Multipli = A * B;
    return Multipli;
    }

int main(){
   double A,B,C,D,E,Media,Soma,MultiA,MultiB,MultiC,MultiD,NovaMedia,NovaSoma;

    //entrada de inputs
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    scanf("%lf",&D);

       
    // Multiplicar A pelo peso 2
    MultiA = Multi(A,2);

    // Mult. B pelo peso 3
    MultiB = Multi(B,3);

    // Mult. C pelo peso 4
    MultiC = Multi(C,4);

    // Mult. C pelo peso 1
    MultiD = Multi(D,1);

    //Somar o res. das multiplicações
    Soma = MultiA + MultiB + MultiC + MultiD;

    //dividir pela soma dos Pesos = 10, será a media
    Media = Soma / 10;

    //print media
    printf("Media: %.1lf\n", Media);

    ///////////////////

    if(Media >=5 && Media <=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &E);
        printf("Nota do exame: %.1lf \n", E);

        NovaSoma = Media + E;
        NovaMedia = NovaSoma / 2;
            if (NovaMedia >=5){
                printf("Aluno aprovado.\n");
            }
            else {
                printf("Aluno reprovado.\n");
            }
   printf("Media final: %.1lf\n", NovaMedia);
    }
    else if(Media >= 7){
        printf("Aluno aprovado.\n");
    }
    else {
        printf("Aluno reprovado.\n");
    }

    
    return 0;
}