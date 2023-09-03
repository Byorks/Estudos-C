# include <stdio.h>


int main(){
    // Defininir cod func
    int A;
    //horas trab.
    int B;
    // salario por hora com duas casas dec.
    double C;
    // calc. do salario
    double D;

    scanf("%d",&A);
    
    scanf("%d",&B);

    scanf("%lf",&C);
    
    D = B * C;


    //print id
    printf("NUMBER = %.d\n", A);

    //PRINT SALA
    printf("SALARY = U$ %.2lf\n", D);

    return 0;
}