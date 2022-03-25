#include <stdio.h>

int main(){
   int i = 10, *cPtr;
   cPtr = &i;
    printf("%d\n",cPtr);
    cPtr+=2;
    printf("%d",cPtr);
}
