#include <stdio.h>
#define max 5

int main(){

    int n;
    int digit,b;
    scanf("%d",&n);
    int array[max];
    b = 0;
    while (n>0)
    {
        digit = n%10;
        n = n/10;
        
        array[b] = digit; 
        b++;
    }
    for(int j = 0; j<b ; j++){
        printf("%d \n",array[j]); 


    }

}

