// 12.Write C code to count and print all numbers from LOW to HIGH by steps of STEP. Test with LOW=0 and HIGH=100 and STEP=5.

#include <stdio.h>

int main()
{
    int LOW,HIGH,STEP,i,count=0;
    printf("enter the value of LOW\n");
    scanf("%d",&LOW);
    printf("enter the value of HIGH\n");
    scanf("%d",&HIGH);
    printf("enter the value of STEP\n");
    scanf("%d",&STEP);
    i = LOW;
    while (i <= HIGH)
    {
        printf("%d \n",i);
        i = i + STEP;
        count++;
    }
    printf("\ncounter is %d \n",count);
    
    return 0;
}