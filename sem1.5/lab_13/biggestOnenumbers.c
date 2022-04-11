#include <stdio.h>
#define N 5

int biggest(int array[]);//biggest fonksiyonun içine array tanımladık.

int main(){

    int input[N];//5 basamaklı bir array tanımladık.
    int a ;
    for(int i=0;i<N;i++){
        scanf("%d",&input[i]);
    }
    a = biggest(input);

    printf("%d",a);


    return 0 ;



}

int biggest(int array[]){
    int max = 0 ;
    for (int i = 0; i<N;i++){
        if(array[i] > max){
            max = array[i];


        } 
        
    }


    for(int i = 0 ; i<N ; i++){
        if(array[i] == max ){
            max = array[i];
        }

    }

    return max;
}