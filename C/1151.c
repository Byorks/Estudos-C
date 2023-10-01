#include <stdio.h>

int main (){
    int N, fibbo = 0, a = 1, b = 0,cont = 0;

    while (N > 46 || N < 0){
        scanf("%d",N);
    }
    
    for (int i = 0; i < N, i++){
        while( i == 0 ){
            printf("%d ",fibbo);
            fibbo++;
            printf("%d",fibbo);
        }
        a++;
        cont = a + i;
        printf("%d ",cont);
        //for ( int X = 1; X < N, X++){
        //    b = i
        //}
        // Guardar o valor de i em 
        //for(int a = 0; i )
        
    }
    
    return 0;
}