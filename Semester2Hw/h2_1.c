#include <stdio.h>
#define MAX_SIZE 100
int sum(int arr[],int start, int len);

int main(){
    int n;
    int sumOfArray;
    printf("input an array size");
    scanf("%d",&n);
    int array[n];

    for(int i = 0; n>i ; i++){

        int counter=0;
        printf("enter a value");
        scanf("%d",&array[i]);
    }
    sumOfArray= sum(array,0,n);
    printf("%d",sumOfArray);

}

int sum(int arr[],int start, int len){

    if(start >= len){
        return 0;
    }

    return(arr[start]+ sum(arr,start+1,len));
    
}
    
