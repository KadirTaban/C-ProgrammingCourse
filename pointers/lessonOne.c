// variables that store adress of another variable

#include <stdio.h>

int main(){
    int a;
    int *p;

    a = 5;
    p = &a;
    p = p-1;
   

    printf("%d \n", *p);
    printf("size of integer is %d bytes\n",sizeof(int));

}