
//Q2: Write a recursion program that finds the largest element in the entered array in C language.
#include <stdio.h>
#define N 5 

int largestNumber(int arr[], int size);


int main(){
    
    int numbers[N];
    int size = 5;

    for(int i = 0; i<5;i++){
        scanf("%d",&numbers[i]); 
    }
    printf("%d",largestNumber(numbers, 5));

}

int largestNumber(int arr[], int size ){
    int max;
    
    if(0 < size){
        if (max < arr[size]){

        max= arr[size];
        
        
        }
        return largestNumber(arr,size-1);
    }
    else{
        return max;
    }

    
}