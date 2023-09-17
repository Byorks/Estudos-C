#include <stdio.h>

int main (){
    double numeros[6];
    for (int i = 0; i < 6; i++){
        scanf("%lf", &numeros[i]);
    }

    int numerospositivos = 0;
    double somaNum = 0;

    for (int i = 0; i < 6; i++ ){
        if (numeros[i] > 0){
            numerospositivos++;
            somaNum += numeros[i]; 
        }
    }
    
    double resultado = somaNum / numerospositivos;
    printf("%d valores positivos\n", numerospositivos);
    printf("%.1lf\n", resultado);

    return 0;
}
