#include <stdlib.h>
#include <stdio.h>

int a;
int b;

void permute(int *x,int *y){
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
    printf("a=%d - b=%d \n",*x,*y);
}



int main(){

    a=14;
    b=7;
    printf("a=%d - b=%d \n",a,b);
    permute(&a,&b);


    return 0;
}