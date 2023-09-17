#include <stdio.h>

int main(){
    int numMin = 0;
    int numMax = 0;
    int result = 0;
    int resultsoma = 0;

    // digite os valores
    scanf("%d", &numMin);
    scanf("%d", &numMax);

    for (int i = numMin; i <= numMax; i++){
        result = i % 13;

        if (result != 0){
            resultsoma += i;
        }
    }
    printf("%d\n", resultsoma);

    // calcule quais números entre X e Y eles incluidos não sao multiplos de 13 e some.
    // se N divido por 13 der resto 0 então é multiplo
    return 0;
}