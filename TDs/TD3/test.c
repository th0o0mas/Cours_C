#include <stdio.h>

typedef struct t {
  int efface;
  char tab[4];
}tab;

void effacer (tab* tableau){
  tableau.efface=1;
}

int main(void){

  int i;
  tab tableau;

  tableau.efface=0;
  for (i=0;i<3;i++)
    tableau.tab[i]='a';
  tableau.tab[3]='\0';

  effacer(&tableau);

  if (tableau.efface)
    printf("le tab est efface\n");
  else
    printf("le tab contient : %s\n",tableau.tab);

  return (0);
}
