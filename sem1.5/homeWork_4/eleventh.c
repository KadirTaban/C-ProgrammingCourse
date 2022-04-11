#include <stdio.h>

int main(){

    int number ;
    int perfectivism;
    int sum = 0;

    scanf("%d",&number);

    for(int i = 1;i<number; i++){

        perfectivism = number % i;



        if (perfectivism == 0 ){
            sum = sum+i;
            

        }
        
            
    }

    if(sum == number){
        printf("%d is a perfect number ",number);
    }

    else{
        printf("%d is not a perfect number.",number);

    }

    
}