#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld(){
    printf("Hello World \n");

}


int *Add(int* a, int* b){
    int c = (*a)+(*b);
    return &c;
}

int main ()
    {
    int a = 2, b = 4;
    int *ptr = Add(&a,&b);
    PrintHelloWorld();
    printf("Sum = %d \n",*ptr);
 }