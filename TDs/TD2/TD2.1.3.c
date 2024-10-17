#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[]) {
    int i;
    if (argc!=4) {
        printf("Il faut 3 arguments !\n");
    }
    else
    {
        for (i=1; i<argc; i++) {
            printf("%s ",argv[i]);
        }
    }
    

    return 0;
}