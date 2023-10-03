#include <stdio.h>

int main(){
    int inputs= 10001, N , in = 0, out = 0,cont1 = 0,cont0 = 0;

    //quantos devem ser lidos
    while(inputs > 10000){
        scanf("%d", &inputs);
    }

    for(int i = 0; i < inputs; i++){
        scanf("%d", &N);

        if (N < 10 || N > 20){
        printf("%d = N, está fora de 10 e 20\n", N);
            out ++;
        }
        else{
            in++;
        }

    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    
    //quantos valores estão entre 10 e 20
    return 0;
}