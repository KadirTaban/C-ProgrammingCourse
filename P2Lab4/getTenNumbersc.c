#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num;
    float *data;
    printf("Enter total number of elements(1 to 100):");
    scanf("%d",&num);

    data = (float*)calloc(num, sizeof(float));
    if(data == NULL){
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    printf("\n");
    //stores the number entered by the user.

    for(i=0; i<num; ++i){
        printf("Enter Number %d",i+1);
        scanf("%f",data+i);
    }
    for(i=1; i<num; ++i){
        if(*data < *(data+i))
            *data = *(data+i);
    }
    printf("largest element = %.2f",*data);
    return 0;


}