#include <stdio.h>
#include <stdlib.h>
int main(){
    

    
    int M,N;

    scanf("%d",&M);

    scanf("%d",&N);
    int sourceImageMatrix[M][N];

    for (int i = 0 ; i<M ; i++){
        for(int j = 0; j<N ; j++){
            sourceImageMatrix[i][j] = rand()%256;

            printf("%d ",sourceImageMatrix[i][j]);
            if((i*j)%4 == 0){
            printf("\n");
        }

        }
        
    }

    int matrixFilter[3][3];
    for (int i = 0; i<3 ; i++){
        for (int j = 0 ; j<3;j++){
            scanf("%d",&matrixFilter[i][j]);

        
        }
    }

    for (int i = 0; i<3 ; i++){
        for (int j = 0 ; j<3;j++){

            printf("%d\n",matrixFilter[i][j]);
        
        }
    }
    
}