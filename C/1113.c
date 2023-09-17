#include <stdio.h>

int main (){
    int LOOP = 1;
    int X,Y = 0;

    while(LOOP == 1){
    printf("Digite X e Y: ");
    scanf("%d %d", &X,&Y);
        if (X > Y){
            printf("Decrescente\n");
        }
        else if(X < Y){
            printf("Crescente\n");
        }
        else{
            LOOP = 0;
        }
    }


    return 0;
}