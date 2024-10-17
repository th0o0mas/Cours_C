#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_MAX 200

int Ecrit_Fichier(FILE *fich_lect, char *nom_fich_ecrit, int nb_lignes)
{
    
    FILE *Nouveau_fichier;
    if (Nouveau_fichier = fopen(nom_fich_ecrit,"w"))
    {
        char Tableau_Initial[TAILLE_MAX];
        for (int i=0; i<nb_lignes; i++)
        {
            if (fgets(Tableau_Initial,TAILLE_MAX,fich_lect)) /* Pour pas qu'il lise la ligne vide ( il lit celle au dessus si elle est vide)*/
            {
                printf("On va ecrire ca : %s \n", Tableau_Initial);
                fprintf(Nouveau_fichier,"%s",Tableau_Initial); /* Pourcentage s pour lui prévenir qu'on met un string*/
            }
            else
            {
                /*char Erreur[]="Il y a eu une erreur dans la copie, possible ligne vide ou nombre de ligne donné > celles présentes. Si persiste vérifier que fichier nouveau en lecture";
                fprintf(stderr,"%s",Erreur);
                */
            printf("a");
            }
        }
        printf("\nOn a normalement tout copie.\n");
    }
    else
    {
        printf("ERREUR OUVERTURE NOUVEAU");
    }
    return 0;
} 



int main(int argc,char *argv[])
{
    FILE *fichier=NULL;
    
    
    
    
    /* Avec demande utilisateur

    char Nom_Fichier_initial[20];
    char Nom_Fichier_a_creer[20];
    printf("Nom du fichier initial :");
    fgets(Nom_Fichier_initial,20,stdin);
    Nom_Fichier_initial[strcspn(Nom_Fichier_initial, "\n")] = '\0'; /* On met un \n dans l'acquisition fgets */
    /*
    printf("\n Nom du fichier a creer :");
    fgets(Nom_Fichier_a_creer,20,stdin);
    Nom_Fichier_a_creer[strcspn(Nom_Fichier_a_creer, "\n")] = '\0'; /* On met un \n dans l'acquisition fgets */
    /*
    printf(" \n Fin acquisition \n");
    */
    
   /* On doit ajouter Nom_Fichier... dans les fopen*/





    if (fichier = fopen(argv[1], "r"))
    {
        printf("\nFichier bien ouvert\n");
        Ecrit_Fichier(fichier, argv[],10);
    }
    else
    {
        fprintf(stderr,"%s","Le Fichier n'est pas ouvrable, (permissions ou n'existe pas ou adresse à specifier)");
    }
    
    fclose(fichier);
    return 0;
}