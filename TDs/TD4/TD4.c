#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cellule {
    int nb;
    struct cellule* suivant;
};

struct t_file{
    struct cellule* premier;
    struct cellule* dernier;
};

void creer(struct t_file* file){
    file->premier=NULL;
    file->dernier=NULL;
}

int vide(struct t_file* file){
    return(file->premier==NULL);
}

void ajouter(struct t_file* file,int nombre){
    struct cellule* tempo;
    if (vide(file)){
        file->premier=(struct cellule*)malloc(sizeof(struct cellule));
        file->premier->nb=nombre;
        file->premier->suivant=NULL;
        file->dernier=file->premier;
    }
    else {
        tempo=(struct cellule*)malloc(sizeof(struct cellule));
        tempo->nb=nombre;
        tempo->suivant=NULL;
        file->dernier->suivant=tempo;
        file->dernier=tempo;
    }
}

void retirer(struct t_file* file){
    struct cellule* tempo;
    if (vide(file)){
        free(file->premier);
        free(file->dernier);
    }
    else {
        tempo=(struct cellule*)malloc(sizeof(struct cellule));
        tempo=file->premier->suivant;
        file->premier=NULL;
        file->premier=tempo;
    }
    free(tempo);
}

int afficherdebut(struct t_file* file){
    return (file->premier->nb);
}

int afficherfin(struct t_file* file){
    return(file->dernier->nb);
}

int nbelem(struct t_file* file){
    int i;
    struct cellule* tempo;
    tempo=file->premier;
    if (vide(file)){
        return 0;
    }
    else {
        while (tempo->suivant != NULL){
        i++;
    }
    return i;
    }
    
}




int main(){
    struct t_file file1;
    
    while (1) {

        int c;
        printf("Quel choix souhaitez vous faire ?\nN°1: Créer une liste vide\nN°2: Ajouter un élément en fin de liste\nN°3: Retirer un élément en début de liste\nN°4: Afficher la valeur du premier élément\nN°5: Afficher la valeur du dernier élément\nN°6: Afficher le nombre d'éléments présents dans la liste\nVotre choix: ");
        scanf("%d",&c);
        switch(c){
            case 1: creer(&file1); break;
            case 2: printf("Que souhaitez vous ajouter ? : "); int i; scanf("%d",&i); 
            ajouter(&file1,i);
            break;
            case 3: retirer(&file1); break;
            case 4: printf("%d\n",afficherdebut(&file1)); break;
            case 5: printf("%d\n",afficherfin(&file1)); break;
            case 6: printf("%d\n",nbelem(&file1)); break;
            default: break;
        }
        
    }




}