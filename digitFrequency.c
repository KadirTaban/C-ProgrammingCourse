#include <stdio.h>
int main(){

    int i = 0;
    int number,digit;
    int counter = 0;

    printf("sayiyi giriniz: ");
    scanf("%d",&number);

    while (number != 0){

        digit = number%10;
        number = number/10;


        

        for(;i<10;i++){

            if(digit == i){
                


                }
    


        }


        printf("%d kadar %d var ",counter,digit);


        

    
    }

    
    return 0;
    
}