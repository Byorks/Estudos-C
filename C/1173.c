#include <stdio.h>

int main(){
    int vetor[10];
    int N = 52;
    int X = 0;
    
    while (N > 50 || N < 0){
        scanf("%d", &N);
    }
    
    for (int i = 0; i < 10 ; i++){
        if(i > 0){
            N = 2 * N;
        }
        vetor[i] = N; 
        printf("N[%d] = %d\n",i, N);
    }

    //for(i = N){

    //}


 return 0;   
}
