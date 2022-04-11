#include <stdio.h>

int main()
{
    int array[10];
    int square;

    for ( int i = 0 ; 10>i;i++ ){
        scanf("%d",&array[i]);
        
        
    }

    for(int i = 0 ; 10>i;i++){
        square = array[i]*array[i];
        printf("%d nin karesi %d .",array[i],square);
    }
}
