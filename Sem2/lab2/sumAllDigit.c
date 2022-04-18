#include <stdio.h>

int sumDigit(int number){
    if (number != 0){

        return (number % 10 + sumDigit(number/10));

    }else{
        return 0;
    }

}

int main(){

    int number, result;

    printf("Enter the number: ");
    scanf("%d",&number);
    result = sumDigit(number);
    printf("Sum of digit %d is %d \n",number,result);
    return 0;

}