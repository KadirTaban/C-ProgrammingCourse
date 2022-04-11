#include <stdio.h>
#include <stdlib.h>


int main()
{
    double num1;
    double num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    printf("Answer: %d", num1+num2);
    return 0;
}