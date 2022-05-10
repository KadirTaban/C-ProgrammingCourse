//pointers as function arguments - Call by reference

#include <stdio.h>

void Increment(int a){
    a = a+1 ;
    printf("Adress of variable a in increment = %d ", &a);
    
}
int main(){
    int a;
    a = 10;
    Increment(a);
    printf("Adress of  variable a in main = %d", &a);
}