#include <stdio.h>


int largestCommonDivisior(int number1, int number2,int div){

    if(number1%div == 0 && number2%div == 0){

    
        return div;
    }else{
        return largestCommonDivisior(number1,number2,div-1);
    }

}
int main(){
    int number1,number2,div;
    scanf("%d %d %d", &number1, &number2, &div);
    printf("%d",largestCommonDivisior(number1,number2,div));

}