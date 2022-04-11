#include <stdio.h>

int main(){

    int number, digit;
    int largest =0, smallest=9;

    scanf ("%d",&number);
    while(number>0){
        digit = number % 10;
        number = number/10;
    
    if(digit>largest){
        largest = digit ;
    }
    if(smallest>digit){
        smallest = digit;
    }

    }
    printf("%d küçük %d büyük",smallest,largest);

}

