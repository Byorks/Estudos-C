#include <stdio.h>
#include <string.h>

int main(){
    char NomeA[10] = "Vanessa";
    char NomeB[10] = "Vanessa";

    // A função strcmp compara o tamanho da primeira string com a segunda
    // Pergunta: "NomeA é maior que NomeB?"
    // Se sim, retorna a diferença no número de caracteres (baseado na tabela ASCII)
    int resultado = strcmp(NomeB, NomeA);
    // Caso resultado for 0, significa que as strings são identicas. 
    if(resultado == 0 ){ 
        printf("Os nomes sao iguais!\n");
    }
    else
    {
        printf("Os nomes são diferentes.\n");
    }
    printf("%d", resultado);
    return 0;
}