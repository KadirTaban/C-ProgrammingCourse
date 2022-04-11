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
            printf("%d \n",sourceImageMatrix[i][j]);

        }
    }


    return 0;
}