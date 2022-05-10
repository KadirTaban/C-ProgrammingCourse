#include <stdio.h>

void Double(int *A,int size)//int* A or int A[] .. it's the same
{
    for (int i=0; i<size ;i++){
        A[i]=2*A[i]];
    }
}

int main(){

    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int i ;
    Double(A,size);
    

    for (i=0;i<size;i++){
        printf("%d\n",A[i]));
    }
}