#include <stdio.h>
// Exemplos de loops de repetição
int main(){
    // Array de numeros do tipo 'double' com 6 espaços alocados
    double nums[6];
    // Cada valor do array será armazenado em um índice:
    // nums[0] nums[1] nums[2] nums[3] nums[4] nums[5]

    // Loop de repetição 'for' que irá iterar 6 vezes pelo código
    for (int i = 0; i < 6; i++)
    {
        // Exibe scanf e armazena em cada índice o valor digitado
        scanf("%lf", &nums[i]);
    }
    
    // Cria variável que armazenará a quantidade de números positivos
    int numsPositivos = 0;

    // Loop de repetição que irá iterar 6 vezes
    for (int i = 0; i < 6; i++)
    {
        // Caso o número for maior que zero, soma +1 na variável "numsPositivos"
        if(nums[i] > 0){
            numsPositivos++;
        }
    }
    
    // Exibe quantidade de números positivos
    printf("%d valores positivos\n", numsPositivos);
}