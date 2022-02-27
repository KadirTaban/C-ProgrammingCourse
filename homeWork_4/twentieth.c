#include <stdio.h>

int main(){
    int x;
    int i;
    int end;
    int sameX;
    int sum ; 

    scanf("%d",&x);
    scanf("%d",&end);

    sameX = x;

    for(i = 1 ;end>i;i = i+2){
        sameX = x;
        for (int j = i; j > 0; j--){
            sameX = sameX * x;

        }
        sum = sum + sameX;
        printf("%d \n",sum);
    }

}