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

            printf(" asas %d\n",matrixFilter[i][j]);
        
        }
    }
    int a = 0;
    int sum = 0 ;
    int b = 0;

    for(;a<a+3;a++){

        if(a+3 == N){
            break;
        }
        for(;b<b+3;b++){
            if(b+3 == M){
                break;
            }
        
            for(int i = 0 ; i<3;i++){
                for (int j = 0; j<3;j++){
                    sum = sum + matrixFilter[i][j]*sourceImageMatrix[a][b];
                    sourceImageMatrix[(a+3)/2][(b+3)/2] = sum;
                    
                }

            }
        }

    }

    for (int i = 0 ; i<M ; i++){
        for(int j = 0; j<N ; j++){

    
            printf("%d ",sourceImageMatrix[i][j]);


        }
        
    }
    
}