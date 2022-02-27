#include <stdio.h>

int main(){

    int array[] = {2,0,1,0,2,1,3,0,1,9};
    int sayi =10 ;
    int sum = 0 ;
    int a,kalan;
    int j = 0 ;
    for (int i = 0 ; i<sayi; i++){
        sum = sum + array[i];

    }
    int dizi[sum];
    for(int i = 0 ; i<sum; i++){
        scanf("%d",&a);

        kalan = a%3;

        if(kalan == 0 ){
            dizi[i] = a;
        }
        else{
            for(;j<sum;j++)
            dizi[sum-j] = a; 
        }

    }
    printf("%d",dizi[0]);
}