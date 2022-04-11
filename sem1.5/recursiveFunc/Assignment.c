#include <stdio.h>

int f(int x);


int main(){
    int a;
    printf("input an a value: ");
    scanf("%d",&a);
    printf("%d",f(a));


}

int f(int x){
    if( x <= 0 ){
        return 0;
    }else{
        return f(x-1)+2 ;
    }
}