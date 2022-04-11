#include <stdio.h>

int main(){
int number,sameNumber;
int digit,b;
int c;
int sum;
int samei;

scanf("%d",&number);
sameNumber = number;

for(int i =1 ;i<number;i++){

    sum = 0;
    samei = i;
    c = 0;
    while (0<samei)
    {
        samei = samei/10;
        c++;

    }

    samei = i;
    while(0<samei){
        digit = samei%10;
        samei = samei/10;
        b = digit;
        for (int j = 1; j < c; j++)
    {
        digit = digit*b;


    }
    sum = sum+digit;
    }

    if(sum == i){
        printf("%d bir armstrong sayidirr \n",sum);
    }

}


return 0;
}