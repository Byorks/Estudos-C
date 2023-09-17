#include <stdio.h>

double Nota1, Nota2, Media;
int Nota1corr = 0;
int Nota2corr = 0;
int novocalc = 0;
int loop = 1;
int cont = 0;

int main (){
    // ! quer dizer não/not.

    
   
    while(loop == 1){
        printf("Digite a primeira nota\n");

        while(!Nota1corr){
            scanf("%lf", &Nota1);
            if (Nota1 > 10 || Nota1 < 0){
                printf("nota invalida\n");
            }
            else{
                Nota1corr = 1;
            }
        }
          
        while(!Nota2corr){
            printf("Coloque a segunda nota\n");

            scanf("%lf", &Nota2);
            if (Nota2 > 10 || Nota2 < 0){
                printf("nota invalida\n");
            }
            else{
                Nota2corr = 1;
                novocalc = 0;
            }
        }
        
        Media = (Nota1 + Nota2) / 2;
        printf("media = %.2lf\n", Media);

        while(!novocalc){
            printf("novo calculo (1-sim 2-nao)\n");
             scanf(" %d", &cont);
            if (cont == 2){
                loop = 0;
                novocalc = 1;
            }
            else if(cont == 1){
                Nota1corr = 0;
                Nota2corr = 0;
                novocalc = 1;
                loop;
            }
            else{
                novocalc = 0;
            }
        }
        
        
    }
    return 0;
}