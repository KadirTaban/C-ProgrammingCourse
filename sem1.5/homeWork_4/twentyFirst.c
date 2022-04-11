#include <stdio.h>

int main(){
    int n = 1;
    int terms ;
    int sum=0 ;

    scanf("%d",&terms);
        for(int i = 0 ; terms>i ; i++){
            n = 1 + n*10;


            sum = sum + n;

    }
    
    printf("%d",sum);

}