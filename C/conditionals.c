#include <stdio.h>
#include <string.h>

int main(){

    int VanessaComFome, VanessaComSono;
    char Fome[1], Sono[1];

    

    // Verificar se usuario digitou Y
    // Verificar se o usuario digitou N
    // Se usuario digitou qualquer outra coisa, retornar o erro e não executar o resto do código

    printf("Vanessa esta com fome?\n");
    scanf(" %s", Fome);

    if(strcmp(Fome, "Y") == 0 || strcmp(Fome,"y") == 0){
        VanessaComFome = 1;
    }
    else if(strcmp(Fome, "N") == 0 || strcmp(Fome,"n") == 0){
        VanessaComFome = 0; 
    }
    else {
        printf("Digite Y ou N\n");
    }

    printf("Vanessa esta com sono?\n");
    scanf(" %s", Sono);

    if(strcmp(Sono, "Y") == 0 || strcmp(Sono,"y") == 0){
        VanessaComSono = 1;
    }
    else if(strcmp(Sono, "N") == 0 || strcmp(Sono,"n") == 0){
        VanessaComSono = 0;
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