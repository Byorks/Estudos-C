#include <stdio.h>

int main(){
    int i, a, vetor[20];
   
    for(i = 20; i >= 0; i--){
        scanf("%d", &vetor[i]);
    }

    for(a = 0; a <21; a++){
        printf("N[%d] = %d\n",a,vetor[a]);   
    }
    
    return 0;
}