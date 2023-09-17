#include <stdio.h>

int main(){
    
    int n, contador = 0;
    scanf("%d", &n);

    // crie n linhas, para cada linha...
    for(int i = 0; i < n; i++){
        // ... printe a(serve para estipular o tanto que quero repetir a ação) vezes.
        // a var. "contador" ira junto do for contar para cada passage de repetição.
        for(int a = 0; a < 3; a++){
            contador++;
            printf("%d ",contador);
        }
        // mais um contador para "pular" um número.
        contador++;
        printf("PUM\n");
        
    }

    return 0;
}