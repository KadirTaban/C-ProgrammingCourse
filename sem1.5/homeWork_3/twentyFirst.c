#include <stdio.h>
#include <math.h>
int main(){

    int number, sameNumber,a,b ;
    int c = 1;
    int digit;
    int i = 0;
    int newNumber;
    

    scanf("%d",&number);
    sameNumber = number;

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
        printf("%d",c);

        printf("%d is last digit, %d is first digit",array[0],array[c-2]);

   



}