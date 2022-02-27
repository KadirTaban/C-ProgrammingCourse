#include <stdio.h>

int controlNumber(int num);

int main(){
    int n;
    for (int i = 0; i != -1; i++)
    {
        scanf("%d",&n);
        if (controlNumber(n) == 1 && n != -1)
        {
            printf("%d >> all digits are equal\n",n);
        }else{
            printf("%d >> not all digits are equal\n",n);
        }
    }

    return 0;
}

int controlNumber(int num){
    int digit,lastd,i=0,j=0,control = 0;
    lastd = num % 10;
    num/=10;

    while (num > 0){
        digit = num % 10;
        num/=10;
        if (lastd == digit)
        {
            i++;
        }
        j++;
    }
    if (i == j)
    {
        control = 1;
    }
    
    return control;
}