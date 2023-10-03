#include <stdio.h>

int main (){
    int N, fibbo = 0, a = 1, b = 0,cont = 0;

    while (N > 46 || N < 0){
        scanf("%d",&N);
    }
    
    for (int i = 0; i < N -3; i++){
        if ( i == 0 ){
            printf("%d ",fibbo);
            fibbo++;
            printf("%d ",fibbo);
            printf("%d ",fibbo);
        }
        a += 2;
        cont = a + i;
        printf("%d ",cont);
       
    }
    
    return 0;
}