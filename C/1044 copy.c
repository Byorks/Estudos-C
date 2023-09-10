#include <stdio.h>
int main(){
    int NumA,NumB,Resto;
    // Dig. primeiro número
    scanf("%d", &NumA);

    // Dig. segundo número
    scanf("%d", &NumB);

    Resto = NumB % NumA;

    if(NumB % NumA == 0 || NumA % NumB == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}