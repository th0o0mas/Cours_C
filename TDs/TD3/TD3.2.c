#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct S1 {
    int a;
    char * ch;
};

struct S2 {
    int a;
    char ch[40];
};

int main(){
    struct S1 v11, v12;
    struct S2 v21, v22;
    v11.a=3;
    v11.ch="Hulk"; 
    v21.a=5;
    strcpy(v21.ch,"Gruik");
    printf("%s\n",v21.ch);


    return 0;
}