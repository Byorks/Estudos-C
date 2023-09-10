#include <stdio.h>

int main(){
    int vanessaComRaiva = 1;
    int vanessaFeliz = 0;

    // Primeiro verifica a condição e depois executa
    while(vanessaComRaiva){
        printf("Bata no Lucas\n");
        vanessaComRaiva = 0;
    }

    // Primeiro executa a ação depois verifica
    do{
        printf("Bata no Diogo\n");
    } while (vanessaFeliz);

    // For é uma estrutura de repetição contada
    //  Var contadora     condição       iteradora(somará +1 a variavel "contador")
    for(int contador = 0; contador <= 5; contador++){
        printf("Pensar\n");
    }

    return 0;
}