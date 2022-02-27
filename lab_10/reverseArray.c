#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int terms,i,t,k,j;

    printf("enter the number of terms\n");
    scanf("%d",&terms);
    int array[terms];
    printf("enter array elements\n");
    
    for ( i = 0; i < terms; i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");

    for ( i = terms-1; i > -1; i--)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
    

  

    return 0;
}



    
