#include <stdio.h>

    //divi de dois p
int Divisao (int NumA, int NumB){
    int Resultdivi = NumA / NumB;
    return Resultdivi;
}
int main(){

    int NumA,NumB,Divi,Resto1,Resto2;

    // Dig. primeiro número
    scanf("%d", &NumA);

    // Dig. segundo número
    scanf("%d", &NumB);

    Divi = Divisao(NumB,NumB);
    printf("%d\n",Divi);

    Resto1 = Divi * NumB;

    Resto2 = NumA - Resto1;

    printf("%d\n",Resto2);

    if(Resto2 == 0){
        printf("Sao multiplos\n");
    }
    else{
        printf("Nao sao multiplos\n");
    }
    return 0;
}