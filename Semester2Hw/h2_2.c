#include <stdio.h>


int recursive(int x);

int main(){
    int input;

    scanf("%d",&input);

    printf("%d",recursive(input));

    
}

int recursive(int x){
    if(x<=0){

        return 0;
    }else{
        return recursive(x-1)+2;
    }
}