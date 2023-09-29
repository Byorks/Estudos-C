#include <stdio.h>

// Função soma que recebe um ponteiro
// Passa endereço de memoria / passa por referencia
void soma(int* bananinha){
    *bananinha += 1;
    printf("Endereço na função: %p\n", bananinha);
}

int main()
{
    // Declara uma variável do tipo inteiro que recebe o valor 0
    int numero = 0;
    printf("Número: %d\n", numero);
    printf("Endereço Número: %p\n", &numero);
    soma(&numero);
    printf("Número somado: %d\n", numero);

    // Declara um ponteiro do tipo int que recebe um endereço de memória da variável "numero"
    int *ponteiro_num = &numero;
    printf("Ponteiro_num: %p\n", ponteiro_num);
    
    // Declara uma variável do tipo int que recebe o valor do endereço de memória do ponteiro
    int valorDoPonteiro = *ponteiro_num;
    printf("ValorDoPonteiro: %d\n", valorDoPonteiro);

    return 0;
}