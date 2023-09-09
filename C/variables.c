#include <stdio.h>

void main (){
    // Declarando uma variavel do tipo Char(string/texto) chamada "Nome".
    char Nome[15] = "Vanessa";
    char Sobrenome[20]= "Ferreira";
    // Não se pode iniciar uma variável com números.
    // Caracteres especiais, também não. Ex.: acentos, ç, etc...
    
    // Declarando variável do tipo Int(número inteiro) chamada "Idade".
    int Idade = 24;

    // Não pode criar variaveis com nomes iguais.
    // Quando eu estou declarando o tipo de variavel estou necessariamente criando uma nova variavel.
    Idade = 25;
    printf("Bem vinda jovem %s %s ao mundo bizarro de C, você tem %d anos de idade. \n" ,Nome,Sobrenome,Idade);
}