#include <stdio.h>

int main(){

    int n;
    float sum = 0;
    float i;

    scanf("%d",&n);

    for (i=2;i<n;i++){

        sum = sum + 1/i ;

    }

    printf("%f",sum);

    return 0;
}