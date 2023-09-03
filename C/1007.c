# include <stdio.h>

int main(){
    int A,B,C,D,Dife,MultiA,MultiB;
    // ctrl+D no VSC seleciona todos os carac. iguais selecionados.
    scanf("%d",&A);
    
    scanf("%d",&B);

    scanf("%d",&C);
    
    scanf("%d",&D);
  
    // Multiplicar A e B
    MultiA = A * B;

    // Mult. C e D
    MultiB = C * D;

    //Dif de A*B e B*C
    Dife = MultiA - MultiB;

    //print Dif
    printf("DIFERENCA = %d\n", Dife);

    return 0;
}