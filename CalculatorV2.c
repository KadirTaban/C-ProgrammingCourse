#include <stdio.h>
#include <stdlib.h>


int main() {

    double num1 ; 
    double num2 ; 
    char operator ; 

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter operator: ");
    scanf(" %c", &operator);
   
    printf("Enter a number: ");
    scanf("%lf", &num2);

    
    
    if(operator == '+'){
        printf("%f", num1 + num2);
    }else if(operator == '-'){
        printf("%f", num1 - num2);
    }else if (operator == '/'){
        printf("%f", num1 / num2);
    }else if ( operator == '*'){
        printf("%f", num1 * num2);
    }else {
        printf("Invalid Operator");
    }

    return 0;
}