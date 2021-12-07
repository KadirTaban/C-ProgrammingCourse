#include<stdio.h>  
#include<math.h>


int main()    
{    
    float x,number,exponent,fac=1,sum = 1;
    
    printf("Enter a number: ");    
    scanf("%f",&number);

    printf("Enter an x: ");   
    scanf("%f",&x);


for(float i = 1; i < number; i++) 
    {
        exponent = pow(x,i);
        fac = fac*i;
        sum = sum + (exponent/fac);

    }     
    printf("sum %f ",sum );

    
   
return 0;  
}