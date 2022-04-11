#include <stdio.h>
#include <string.h>
int add(int array[],int number,int len1);

int main(){
    int len ;
    int addNumber;
    printf("girmek istediğiniz sayi adetini belirtin: ");
    scanf("%d",&len);

    int arr[len];

    for(int i =0; i<len ; i++){

        printf("sayi değeri giriniz : ");
        scanf("%d",&arr[i]);

    }
    scanf("%d",&addNumber);
    len = len+1;
    arr[len] = addNumber;
    add(arr,addNumber,len);
    
    return 0;
}


int add(int array[],int number,int len1){
    int a;
    int max;
    
    for(int i = 0 ; i<len1+1 ; i++){
        for(int j = i; j<len1+1; j++){
            if(array[i]<array[j]){
                max=array[i];
                array[i] = array[j];
                array[j] = max;
            }
        } 

    }
    for(int i = 0; i<len1 ; i++){

        printf("küçükten büyüğe  %d  \n",array[i]);
    }

    return 0;
}


