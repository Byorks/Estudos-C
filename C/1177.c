#include <stdio.h>

int main(){ 
    int vetor[1000];
    int N = 52;
    int X = -1;
    
    while (N > 50 || N < 2){
        scanf("%d", &N);
    }

    for(int i = 0; i < 1000; i++){
        if(X < N-1){
            X++;
        }
        else{
            X = 0;
        }
        vetor[i] = X;
        printf("N[%d] = %d\n",i,X);

    }
    return 0;
}
