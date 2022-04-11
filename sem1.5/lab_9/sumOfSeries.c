#include<stdio.h>  


int main()    
{    
    float a,x,number,exponent,fac=1,sum = 1;
    
    printf("Enter a number: ");    
    scanf("%f",&number);

    printf("Enter an x: ");   
    scanf("%f",&x);
    a = x;

for(float i = 1; i < number; i++) 
    {
        x = a;

        for(int c = 1 ; c<i ; c++){
            x = x * a;
        }
        fac = fac*i;
        sum = sum + (x/fac);

    }     
    printf("sum %f ",sum );

    
   
return 0;  
}