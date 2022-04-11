#include <stdio.h>

int main(){
    int result;
    for(int i = 100;i<200;i++){

        result = i % 9;
        if(result == 0 ){
            printf("%d\n",i);
        }
    }
}