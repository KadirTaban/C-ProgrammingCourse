#include <stdio.h>
#include <stdlib.h>


void sayHi(char name [], int age);

int main(void)
{
    sayHi ("Mike",40) ;
    sayHi ("Tom",23) ;

    return 0;

}


void sayHi(char name [], int age){
    printf("Hello %s, you are %d\n", name, age);
}