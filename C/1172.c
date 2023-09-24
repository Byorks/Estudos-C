#include<stdio.h>

int main (){
    int x = 0, X = 0, V[10], i;
    
    for(i = 0; i < 10; i++){
        
        scanf("%d", &V[i]);
        
        if(V[i] <= 0){
        V[i] = 1;
        }

        printf("X[%d] = %d\n",i, V[i]);
    }

    return 0;
}
