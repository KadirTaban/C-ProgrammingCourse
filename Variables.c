#include <stdio.h>
#include <stdlib.h>


int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    
    printf("%d",luckyNumbers[1]);
    return 0;

}