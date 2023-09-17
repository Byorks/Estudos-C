#include <stdio.h>

int main(){
    int N = 0;
   
    scanf("%d", &N);
    
    if (N <= 2 || N >= 1000){
        printf("Digite um n entre 3 e 999.");
    } 
    else { 
        int Resultado = 0;
       
        for (int ContDaTab = 1; ContDaTab < 11; ContDaTab += 1){
            Resultado = N * ContDaTab;
            printf("%d x %d = %d\n", ContDaTab,N,Resultado);

        }   
    }
    return 0;
}