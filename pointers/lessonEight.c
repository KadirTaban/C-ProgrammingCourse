// malloc calloc


#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;//goes on stack
    int *p;
    int size = 5 ;
/*     p = (int*)malloc(size*sizeof(int));    */    
    p = (int*)calloc(size,sizeof(int));
    *p = 10;

    free(p);

    p = (int*)malloc(20*sizeof(int));
}