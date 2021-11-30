#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d",& a);
    scanf("%d",& b);
    scanf("%d",& c);

    if (a>b && a>c){
        printf("%d is highest ",a);
    }
    
    else if(b>a && b>c){

        printf("%d is highest ",b);

    
    }
    
    else if(c>a && c>b){

        printf("%d is highest ",c);

      }
}