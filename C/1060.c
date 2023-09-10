#include <stdio.h>
// Exemplos de loops de repetição
int main(){
    double nums[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &nums[i]);
    }
    
    int numsPositivos = 0;
    for (int i = 0; i < 6; i++)
    {
        if(nums[i] > 0){
            numsPositivos++;
        }
    }
    
    printf("%d valores positivos\n", numsPositivos);
}