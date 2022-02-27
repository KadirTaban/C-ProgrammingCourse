#include <stdio.h>

int toplayici(int x, int y, int z);


int main(){

    int number_1;
    int number_2;
    int number_3;
    int toplam;
    
    scanf("%d",&number_1);
    scanf("%d",&number_2);
    scanf("%d",&number_3);


    toplam = toplayici(number_1,number_2,number_3);

    printf("%d",toplam);
}

int toplayici(int x, int y, int z){

    int sum;

    sum = x + y + z ;

    return sum;
}