#include <stdio.h>

int main (){
    int X,Y;
    int loop = 1;

    printf("Digite X e Y, se nulo sairá do programa\n");
    
        while ( loop == 1){     
        scanf("%d %d", &X,&Y);

        if (X > 0 && Y > 0){
            printf("primeiro\n");
        } 
        else if ( X < 0 && Y > 0)
        {
            printf("segundo\n");
        } 
        else if ( X < 0 && Y < 0)
        {
            printf("terceiro\n");
        }
        else if (X > 0 && Y < 0){
            printf("quarto\n");
        }
        else if (X == 0 || Y == 0 ){
            loop = 0;
            printf("X 0 ou Y 0\n");
        }
        }
    return 0;
    }
