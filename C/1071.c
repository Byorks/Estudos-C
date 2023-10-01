#include <stdio.h>

int main(){
    int Y,X,Temp,Soma = 0,Impares = 0;
    // coloca dois números
    scanf("%d",&X);
    scanf("%d",&Y);
    // conta o espaço entre eles, se x é maior que Y, inverta
    if(X > Y){
        int Temp = X;
        X = Y;
        Y = Temp;
    }
    printf("%d\n",X);
    printf("%d\n",Y);
    
    for (int i = X +1; i < Y; i++){
        // se for para negar a op. coloque entre ()
        if(i % 2 != 0){
            Impares += i;
            printf("soma do impar = %d i = %d\n", Impares, i);
        }
    }
    // soma os números ímpares e mostra
    printf("Soma da bagaceira = %d\n", Impares);
    return 0;
}