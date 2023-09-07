#include <stdio.h>

int main(){

    int VanessaComFome, VanessaComSono;
    char Fome, Sono;

    

    // Verificar se usuario digitou Y
    // Verificar se o usuario digitou N
    // Se usuario digitou qualquer outra coisa, retornar o erro e não executar o resto do código

    printf("Vanessa esta com fome?\n");
    scanf(" %c", &Fome);
    if(Fome == "Y"){
        int VanessaComFome = 1;
    }
    else if(Fome == "N"){
        int VanessaComFome = 0;
    }
    else {
        printf("Digite Y ou N\n");
    }

    printf("Vanessa esta com sono?\n");
    scanf(" %c", &Sono);
    if(Sono == "Y"){
        int VanessaComSono = 1;
    }
    else if(Sono == "N"){
        int VanessaComSono = 0;
    }
    else {
        printf("Digite Y ou N\n");
    }


//Perguntar se Van esta com Fome, se true então : coma.
// Criar bloco de código, se atender o if, a instrução no bloco será executada.
    
    if (VanessaComFome && VanessaComSono){
        printf("Hora de comer e dormir!\n");
    }
    else if (VanessaComFome == 1){
        printf("Hora de comer!\n");
    }
    else if (VanessaComSono == 1){
        printf("Durma!\n");
    }
    else {
        printf("Estude!\n");
    }
//Se Van não está com fome, faça nada.

// Se esta com sono então : durma.

// Se não está com sono e não está com fome, estude.

}