#include<stdio.h>
int main(){

    int number;
    int kalan;
    

    printf("bir sayı değeri giriniz : ");
    scanf("%d",&number);

    kalan = number % 2;

    if(kalan == 0){
        printf("%d çifttir.",number);

    }
    else{
                
        printf("%d çifttir.",number);

        
    }

    
}