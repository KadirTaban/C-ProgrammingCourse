#include <stdio.h>
#include <math.h>
int main(){

    int number, sameNumber,a,b ;
    int c = 1;
    int digit;
    int i = 0;
    int newNumber;
    int t;

    scanf("%d",&number);
    sameNumber = number;
    t = number;

    while (number>0)
    {
        number = number /10;
        c++;

        }

    int array[c];
    for( i = 0 ; c>i ; i++){
        digit = sameNumber % 10;
        sameNumber = sameNumber/10; 
        array[i] = digit;
        

        }

    a = pow(10,0) ;
    b = pow(10,c-2);
    
    newNumber = t + (array[0]*b) - (array[c-2]*b) + (array[c-2]*a) - (array[0]*a);

    

    printf("%d",newNumber);



}