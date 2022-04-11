#include <stdio.h>

int main(){

    int x, y, z;
    int *int_addr;

    x=41;
    y=12;
    /* the ampersand is providing keep adress of variable. */
    int_addr = &x;
    /* the pointer(*) is going to adress for value. */
    z = *int_addr;
    printf("z: %d \n", z);

    int_addr = &y;

    z = *int_addr;
    printf("z: %d\n",z);

    return 0;

}