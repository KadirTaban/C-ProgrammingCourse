#include <stdio.h>
#define N 5

int main(){
    int A[N];
    float sum = 0;
    float average;
    int c = 0, b = 0;


    for(int i = 0 ; N>i ; i++){
        scanf("%d", &A[i]);
        sum = sum + A[i];
        
    }
    average = sum / N;

    for(int i = 0; N>i ; i++){
        if(A[i]>average){
            c++;
        }
        if(A[i]<average){
            b++;
        }
        

    }
    int C[c];
    int B[b];


    for ( int i = 0; i < N; i++)
    {
        
            for(int j = 0 ; j<c ; j++){
                if(A[i]>average){
                C[j] = A[i];
                }
            }

            for (int k = 0 ; k<b; k++){
                if(A[i]<average){
                    B[k] = A[i];
                }
            }
        
        
    }
    for(int i = 0; i<c ; i++){
    printf(" averajdan büyük elemanlar %d\n",C[i]);

    }
    for(int i = 0; i<b ; i++){
    printf(" averajdan küçük elemanlar %d\n",B[i]);

    }
}

