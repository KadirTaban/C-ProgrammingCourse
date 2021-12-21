#include <stdio.h>

int main(){

    int M ;
    scanf("%d",&M);
    int array_1[M][M];
    int array_2[M][M];

    for(int i = 0; i<M;i++){
        for(int j = 0; j<M ; j++){
            scanf("%d",&array_1[i][j]);
        }
        
        
    }
    int sum = 0;

    for(int i = 0; i<M;i++){
        for(int j = 0; j<M ; j++){
            scanf("%d",&array_2[i][j]);
        }
        
        
    }
    

    for(int i = 0; i<M;i++){
        for(int j = 0; j<M ; j++){
            sum = sum + array_1[i][j] + array_2[i][j];

        }
        
        
    }
    
    printf("%d",sum);

}