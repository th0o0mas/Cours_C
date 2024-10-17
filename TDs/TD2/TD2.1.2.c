#include <stdlib.h>
#include <stdio.h>

#define TAILLE 10

int main(void){
    char *chaine;
    int *tab;
    int i;

    tab=(int *)malloc(TAILLE*sizeof(int));
    chaine=(char*)malloc(TAILLE*sizeof(char));
    
    for (i=0; i<TAILLE-1;i++){
        tab[i]=i+1;
        chaine[i]=(char)(i+65);
    }
 
    return 0;

}