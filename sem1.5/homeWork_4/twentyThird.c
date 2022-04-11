#include <stdio.h>

int main(){
    int n ;
    int binary;
    scanf("%d",&n);

    while (0<n){
        binary = n % 2;
        n = n/2; 
        printf("%d",binary);
    }
}