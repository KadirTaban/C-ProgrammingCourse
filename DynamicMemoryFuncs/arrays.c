#include <stdio.h>
#include <stdlib.h>

int main(){

    int* ptr;
    int n,i;

    /* get the number of elements for the array */
    scanf("%d",&n);
    /* Dynamically allocate memory using malloc() */
    ptr = (int*)malloc(n * sizeof(int));
    
    /* Check if the memory has been succesfully allocated by malloc or not */
    if(ptr == NULL) {
        printf("memory not allocated. \n");
        exit(0);}
    else {
        /* Memory has been successfully allocated by malloc or not*/
        for(int j = 0 ; j<n; ++j){
            ptr[j] = j+1;

        }
        int m = n+1;
        ptr = (int*)realloc(ptr, m);
        ptr[] = 42;        
        printf("The elements of the array are: \n");

        for(i=0; i<n;++i){
            printf("Adress: %d, Data:%10d \n", &ptr[i],ptr[i]);
        }

        

        return 0;
    }
}