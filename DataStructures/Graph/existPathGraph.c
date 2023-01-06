#include <stdio.h>
#include <stdlib.h>

#define N 5

int existsPathTwoVertices(int diagram[N][N], int source, int dest){
    if(diagram[source][dest]){
        return 1;
    }
    
    for(int i=0; i<N ; i++){
        if(diagram[source][i] && existsPathTwoVertices(diagram,i,dest)){
            return 1;
        }
    }
    return 0;
}

void checkPath(int diagram[N][N], int source, int dest){
    if(existsPathTwoVertices(diagram,source-1,dest-1))
        printf("\n %d -> %d path exists\n",source,dest);
    else
        printf("\n %d -> %d path not exists \n",source,dest);
}

int main(){
    int diagram[N][N] = {
        {0,1,1,0,0},
        {0,0,0,1,0},
        {0,1,0,1,1},
        {0,0,0,0,1},
        {0,0,0,0,0}
    };
    checkPath(diagram, 1, 4);

    return 0;
}