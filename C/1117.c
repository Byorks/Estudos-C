#include <stdio.h>

double Nota1, Nota2, Media;
int Nota1corr = 0;
int Nota2corr = 0;

int main (){
    // ! quer dizer não/not.

    
    printf("Digite a primeira nota\n");

    while(!Nota1corr){
        scanf("%lf", &Nota1);
        if (Nota1 > 10 || Nota1 < 0){
            printf("nota invalida\n");
        }
        else{
            Nota1corr = 1;
        }
    }

    while(!Nota2corr){
        scanf("%lf", &Nota2);
        if (Nota2 > 10 || Nota2 < 0){
            printf("nota invalida\n");
        }
        else{
            Media = (Nota1 + Nota2) / 2;
            printf("media = %.2lf", Media);
            Nota2corr = 1;
        }
 
    }
    return 0;
}