#include <stdio.h>

// Multiplica 2 par.
double Multi (double A, int B){
    double Result = A * B;
    return Result;
} 

int main(){
    double Code;
    int Qtd;
    double Preco;
    double Total;

    scanf("%lf", &Code);

    scanf("%d", &Qtd);

    if(Code == 1){
        Preco = 4.00;
        Total = Multi(Preco,Qtd);
    }
    else if (Code == 2){
        Preco = 4.50;
        Total = Multi(Preco,Qtd);
    } 
    else if (Code == 3){
        Preco = 5.00;
        Total = Multi(Preco,Qtd);
    }
    else if (Code == 4){
        Preco = 2.00;
        Total = Multi(Preco,Qtd);
    }
    else if (Code == 5){
        Preco = 1.50;
        Total = Multi(Preco,Qtd);
    }      


    printf("Total: R$ %.2lf\n",Total);
    return 0;    
}       