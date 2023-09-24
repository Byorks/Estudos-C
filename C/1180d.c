#include<stdio.h>

int main(){
    int tamanho = 0, posição = 0, posição1 = 0;
    double valorind = 0, menor = 0, m = 0;

    while(tamanho <= 1 || tamanho >= 1000){
        scanf("%d", &tamanho);

        double listinha[tamanho];

        for (int i = 0; i < tamanho; i++){
            scanf("%lf", &listinha[i]);
            valorind = listinha[i];
            //Verificando a primeira repetição
            if(i == 0){
            menor = valorind;
            m = valorind;
            }
            if(valorind < menor){
                menor = valorind;
                posição = i;
            }
            if(valorind > m){
                m = valorind;
                posição1 = i;
            }
        }
        printf("Menor valor: %.0lf\n",menor);
        printf("Posição: %d\n", posição);

        printf("Maior valor: %.0lf\n",m);
        printf("Posição: %d\n", posição1);


    }
    return 0;
}