#include <stdio.h>

int main() {

    int A[] = {2,4,5,8,1};
    int i;
    int *p = A;
    /* printf("%d \n",A);
    printf("%d \n",&A[0]);
    printf("%d \n",A[0]);
    printf("%d \n",*A); */
    for (i = 0;i<5;i++){

        printf("Adress = %d\n",*(p+i));
        printf("Adress = %d\n", A+i);
    }
}