#include <stdio.h>

int maximum(int x, int y, int z); //fonksiyon prototipi.


int main()
{
    int number1;
    int number2;
    int number3;

    printf("Enter three integers:");
    scanf("%d %d %d",&number1,&number2,&number3);

    printf("Maximum = %d \n",maximum(number1,number2,number3));

    return 0;

    
}
 
int maximum(int x,int y, int z)
{
    int max = x;

    if(y>x){
        max = y;

    }

    if(z>max){
        max = z ;
    }
    return max;
}