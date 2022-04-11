#include <stdio.h>
# define N 10
int main() {

    int array[N][2];
    int sum_1 = 0,average_1,sum_2=0, average_2; 
   
    printf("boy değeri girin\n");
    for(int i = 0 ; i<N;i++){
        scanf("%d %d",&array[i][0],&array[i][1]);
        sum_1 = sum_1 + array[i][0];
        sum_2 = sum_2 + array[i][1];
    }
        average_1 = sum_1 /N;
   

    
    
    average_2 = sum_2 /N;


    printf("boy %d",average_1);
    printf("kilo %d",average_2);

    
    

}