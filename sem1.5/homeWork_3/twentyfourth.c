#include <stdio.h>

int main(){
    int number, sameNumber;
    int digit ;
    int a = 0;
    scanf("%d",&number);
    sameNumber = number;

    for(int i = 0;i<10;i++){
        a = 0;
        number = sameNumber;
        while ( number>0){
            digit = number % 10;
            number = number/10;
            
                if (i == digit){
                
               
                    a++;

                }

        
            }
            printf("%d kadar % d var \n",a,i);


       
    }
    return 0;
}