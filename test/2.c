#include <stdio.h>

int main(){

    int num = 10, *ptr=&num  ;

    printf("num: %d \n", num);
    printf("updating value of num via ptr ... \n %ld \n",&num);
    *ptr = 20;

    printf("num %d \n", num);
    printf("num via ptr: %d \n", *ptr);
    return 0;
}