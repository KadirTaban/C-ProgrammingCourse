#include <stdio.h>

int main(){
int number,sameNumber;
int digit,b;
int c;
int sum;
scanf("%d",&number);

sameNumber = number;

while(0<number){

    number = number/10;
    c++;

}
number = sameNumber;
while (0<number)
{
    digit = number%10;
    number = number/10;
    b = digit;

    for (int i = 1; i < c; i++)
    {
        digit = digit*b;


    }
    sum = sum+digit;

    
    
}

if(sum == sameNumber)
        printf("%d bir armstrong sayidir.",sameNumber);

    else{
        printf("%d bir armstrong sayi değildir.",sameNumber);
    }



return 0;
}