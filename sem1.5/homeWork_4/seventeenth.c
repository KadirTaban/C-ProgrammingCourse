#include <stdio.h>

int main(){

    int n ;
    int sum = 1;
    scanf("%d",&n);
    for (int i = 0; n>i ; i++){
        sum = sum + (1/i);
    
    }
    printf("%d",sum);
}