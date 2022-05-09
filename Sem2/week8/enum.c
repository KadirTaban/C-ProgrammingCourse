#include <stdio.h>

int main(){
    //Define new data type mainColors
    enum boolean {
        false = 0,
        true = 1 

    };

    //now define variable with data type boolean

    enum boolean isTrue;

    isTrue = true;
    if( isTrue == true )
        printf("True \n");

    return 0;
}