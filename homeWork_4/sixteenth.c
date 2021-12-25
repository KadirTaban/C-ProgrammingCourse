// 16.Write C code to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

#include <stdio.h>

int main()
{
    float number , x, fac=1,a=1,sum=0,t;
    scanf("%f",&number);
    float terms;
    scanf("%f",&terms);

    for(float i = 2; i <= terms ; i=i+2){
        x = number;
        for(float j = 1; j <i ; j++){
            x = x * number;

        }

        printf("x üzeri i %f",x);
        fac = 1;
        fac = fac * a; 
        for(float j = 1; j<i+1 ; j++){
            
            fac = fac * j;

        }
        printf("i kadar fac %f",fac);
        t = x/fac;
        sum = sum + 1-t;
        t = t*-1;


    }
    
        printf("sonuc %f",sum);
    



    return 0;
}
    
   
