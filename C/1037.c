#include <stdio.h>

int main(){
    double Num;

    scanf("%lf", &Num);

    if(Num >=0 && Num <=100){
        if(Num >=0 && Num <=25)
            printf("Intervalo [0,25]\n");
        else if(Num >=25 && Num <=50)
            printf("Intervalo (25,50]\n");
        else if (Num >=50 && Num <=75)
            printf("Intervalo (50,75]\n");
        // else é sem condição definida, porque ele é o que não foi coberto pelos ifs superiores.
        else
            printf("Intervalo (75,100]\n");           
    }
    else{
        printf("Fora de intervalo\n");
    }

    return 0;    
}