#include <stdio.h>

int main(){
    // Declarar variaveis A e B
    int A,B;

    // Atribui valor a A
    scanf("%d",&A);

    // Atribui valor a B, necessita de & para "apontar".Pesq. Ponteiros.
    scanf("%d",&B);

    // Soma A com B
    int Soma = A + B;

    // Exibe resultado
    printf("X = %d\n",Soma);

}
