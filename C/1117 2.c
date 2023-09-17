#include <stdio.h>

double Nota1, Nota2, Media;
int finalizar = 0;

int main (){ 
    while(!finalizar){
    scanf("%lf", &Nota1);
    if (!(Nota1 <= 10) || !(Nota1 >= 0)){
       printf("nota invalida\n"); 
    }
    else { 
    printf("segunda nota\n");
    scanf("%lf", &Nota2);
        if (!(Nota2 <= 10) || !(Nota2 >= 0)){
            printf("nota invalida\n");  
        }
        else{
            Media = (Nota1 + Nota2) / 2;
            printf("media = %.2lf", Media);
            finalizar = 1;
        }
    }
    }
    return 0;
}