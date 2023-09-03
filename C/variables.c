#include <stdio.h>

void main (){
    // Declarando uma variavel do tipo Char(string/texto) chamada "Nome".
    char Nome[15] = "Vanessa";
    char Sobrenome[20]= "Ferreira";

    // Declarando variável do tipo Int(número inteiro) chamada "Idade".
    int Idade = 24;

    printf("Bem vinda jovem %s %s ao mundo bizarro de C, você tem %d anos de idade. \n" ,Nome,Sobrenome,Idade);
}