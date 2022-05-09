#include <stdio.h>

int main(){
    int a = 6;
    int *p = &a;
    *p = 7;

    int **q = &p;
    int ***r = &q;  

    printf("pointer p keep this %d\n", *p);
    printf("%d\n",*q);// adress of pointer p
    printf("pointer to pointer q keep this %d \n", **q);
    printf("%d\n",*r);//adress of pointer to pointer q
    printf("pointer to pointer to pointer r keep this %d", ***r);



}