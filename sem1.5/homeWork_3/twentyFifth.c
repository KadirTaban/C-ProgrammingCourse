#include <stdio.h>

int main(){
    int number,sameNumber;
    int number_2;
    int a,b ;

    printf("given first number: ");
    scanf("%d",&number);
    printf("given second number: ");
    scanf("%d",&number_2);

    if(number>number_2){
        sameNumber = number;
        for(;sameNumber>0;sameNumber--){
            a = number%sameNumber;
            b = number_2 % sameNumber;

            if(a == 0 &&  b == 0 ){
                printf("%d is  hcf ",sameNumber );
                break;
            }
        }
    }

            else{
            sameNumber = number_2;
            for(;sameNumber>0;sameNumber--){
                a = number%sameNumber;
                b = number_2 % sameNumber;

                if(a == 0 &&  b == 0 ){
                printf("%d is  hcf ",sameNumber );
                break;
                }
            }
    

    }

}