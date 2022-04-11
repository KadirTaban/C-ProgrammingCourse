//code to convert a binary number into a decimal number without using array, function and while loop.
// 1100010
#include <stdio.h>

int main(){
    int binary, digit;
    int c = 0 ; 
    int decimal = 1;
    int sum = 0;
    scanf("%d",&binary);
    c=0;
    for(int i = 0 ; c >= i ; i++){
        
        digit = binary % 10;
        binary = binary / 10;
       //printf(" c bu %d %d \n",c,digit);
        if(digit == 1 && c==0 ){
            sum = 1;

        }
        
        if(binary != 0 ){

            c++;
        }
        
        
        decimal = 1;
        for(int j = 0 ; c>j ; j++){
            decimal = decimal*2;
            
        }
        decimal = decimal * digit;
        
        sum = sum + decimal;
        
        
        printf("%d\n",sum);

        
    }
    

        

}