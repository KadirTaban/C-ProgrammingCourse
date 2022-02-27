#include <stdio.h>

int main(){

    float pn;

    for ( float n = 0 ; n<100; n++){

        pn = n*(3*n-1)/2;

        
        if(pn<100){
            printf("%f\n",pn);
            
        }
        else{
            break;
        }
        
    }


    
}