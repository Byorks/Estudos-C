#include <stdio.h>
#include <string.h>

int main(){
    
    char Carac1[16]; 
    char Carac2[16]; 
    char Carac3[16]; 
    
    //primeira ver. vertebrado ou invertebrado
    scanf(" %s", Carac1);
    scanf(" %s", Carac2);
    scanf(" %s", Carac3);
    
    if (strcmp(Carac1,"vertebrado") == 0){
    // se ave
        if(strcmp(Carac2,"ave") == 0){
            // se carnivoro emtao aguia
            if(strcmp(Carac3,"carnivoro") == 0){
                printf("aguia\n");
                //se onivoro entao pomba
            } else if (strcmp(Carac3,"onivoro") == 0){
                printf("pomba\n");
            }
            // se mamifero 
        } else if(strcmp(Carac2,"mamifero") == 0){
            // se onivoro entao homem
            if (strcmp(Carac3,"onivoro") == 0){
                printf("homem\n");
                // se herbivoro entao vaca
            } else if(strcmp(Carac3,"herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }
    // invertebrado 
    else if (strcmp(Carac1,"invertebrado") == 0){
        // se inseto
        if(strcmp(Carac2,"inseto") == 0 || strcmp(Carac2,"Inseto") == 0){
            // hematofago entao pulga
            if(strcmp(Carac3,"hematofago") ==0){
                printf("pulga\n");
                // herbivoro entao lagarta
            } else if (strcmp(Carac3,"herbivoro") == 0){
                printf("lagarta\n");
            }
            // Se anelideo
        }else if (strcmp(Carac2,"anelideo") == 0){
            // Se hematofago entao sanguessuga
            if(strcmp(Carac3,"hematofago") == 0){
                printf("sanguessuga\n");
                // Se onivoro entao minhoca
            }else if (strcmp(Carac3,"onivoro") == 0){
                printf("minhoca\n");
            }

        }

    }    
    return 0;
}