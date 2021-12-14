#include <stdio.h>  
int main()  
{  
    int number, sameNumber;
    int digit;
    int sum;
    int fac = 1;
    int a = 0;
    
    scanf("%d",&number);
    sameNumber = number;
    while (number>0){
        digit = number % 10 ;
        number = number /10;
        fac = 1;
        for(;1<digit; digit--){
            fac = fac * digit;
        }

        sum = sum+fac;


    }
    a=sum + a;

    if (a == sameNumber){
    
    printf("%d is a strong number. \n",a);
    }
    
    
    return 0; 
}  
