#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){
    int a,c;
    int b[6];

    for(int i = 0 ;i<100;i++ ){
        a = rand()%6 +1;
        
        for(int j = 0 ; 6>j; j++ ){

            if(a == j+1){
                b[j]++;//burada b dizisindeki j elemanına count edildi.
            }
            
           
        }
    }

    for (int k=0;k<6;k++){

        printf("%d times % d \n",b[k],k+1);


    }


        
        
        return 0;


    }
        


    
