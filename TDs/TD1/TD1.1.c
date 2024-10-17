

#include <stdio.h>
#include <stdlib.h>

int tab[10];
int var;
int j;

int main() {
    int i;  // Déclaration de la variable 'i'

    // Saisie des valeurs du tableau
    for (i = 0; i < 10; i++) {  // Correction de la limite (i < 9 au lieu de i <= 8)
        printf("Entrez un entier pour tab[%d] : ", i);
        scanf("%d", &tab[i]);  // Utilisation de &tab[i] pour stocker l'entrée
    }

    // Affichage des valeurs du tableau
    printf("Les valeurs du tableau sont :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");  // Saut de ligne après l'affichage
    for (j=0; j<10; j++)
    {
        for (i=0; i<9 ; i++)
     {
           if (tab[i]>tab[i+1])
         {    
                var=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=var;
            }
    }
    }
    
    printf("Les valeurs du tableau trié sont :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");  // Saut de ligne après l'affichage
    return 0;
}
