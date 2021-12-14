#include <stdio.h>

int main(){
    int number;
    int digit ;
    int samei;
    int fac;
    int sum;
    scanf("%d",&number);

    for(int i = 1 ; number>i ; i++){
        samei = i;
        sum = 0;

        while (samei>0)
        {
            digit = samei % 10 ;
            samei = samei/10 ;
        
        fac = 1;
        for (; 1<digit; digit--){
            fac = digit * fac;


        }

        sum = sum + fac;

        if ( sum == i){
        printf("%d is strong sayidir\n",i);

        }
        }

        
        
        

    }


}