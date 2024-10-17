#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNOTES 4

struct etudiant {
    char nom[10];
    int annee_naissance;
    int notes[MAXNOTES];
    int nombre_notes;
};



void SaisirFiche(struct etudiant *x){
    int tmp;
    printf("Combien y-a-t'il de notes ? ");
    scanf("%d",&tmp);
    while (tmp > MAXNOTES)
    {
        printf("Il doit y avoir moins de %d notes \n", MAXNOTES+1);
        printf("Combien y-a-t'il de notes ? ");
        scanf("%d",&tmp);
        
    }
    x->nombre_notes=tmp;
    

    printf("Nom de l'étudiant : ");
    scanf("%s",x->nom);

    printf("Année de naissance : ");
    scanf("%d",&(x->annee_naissance));

    int i;
    for (i=0;i<x->nombre_notes;i++){
        printf("Entrez la note %d : ", i+1);
        scanf("%d",&(x->notes[i]));
    } 
}

void AfficherFiche(struct etudiant *y){
    int i;
    printf("\n Nom de l'étudiant : %s \n", y->nom);
    printf("Année de naissance : %d \n", y->annee_naissance);
    printf("Notes de l'étudiant : ");
    for (i=0; i<y->nombre_notes; i++){
        printf("%d ", y->notes[i]);
    }
    printf("\n");

}

int Moyenne(struct etudiant z){
    int i;
    float tmp;
   
    tmp=0;
    if (z.nombre_notes>0){
        for (i=0;i<z.nombre_notes;i++){
            tmp+=z.notes[i];
        }
    }
    tmp=tmp/z.nombre_notes;
    return tmp;
}

int main(){
    float moyenne;
    struct etudiant eleve;
    SaisirFiche(&eleve);
    AfficherFiche(&eleve);
    moyenne=Moyenne(eleve);
    printf("\nLa moyenne de l'élève est : %f\n",moyenne);
    
    return 0;
}

