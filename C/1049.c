#include <stdio.h>
#include <string.h>

int main(){
    
    char Carac1[10]; 
    char Carac2[10]; 
    char Carac3[10]; 

    printf("Digite se o animal é vertebrado ou invetebrado\n");
    scanf(" %s", Carac1);
    
    if (strcmp (Carac1,"vertebrado") == 0){
        printf("digite : ave ou mamifero\n");
        scanf(" %s", Carac2);        
        
        if (strcmp (Carac2,"ave") == 0){
            printf("carnivoro ou onivoro\n");
            scanf(" %s", Carac3);
           
            if (strcmp (Carac3,"carnivoro") == 0){
                printf("Result : Aguia\n");
            }

        }
        else if (strcmp (Carac1, "mamifero") == 0){
            printf("carnivoro ou onivoro\n");
            scanf(" %s", Carac3);
                if (strcmp (Carac3,"onivoro"))

        }
    } 
        
    return 0;
}