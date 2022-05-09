#include <stdio.h>

int main(){

    enum mainColors {
        Red,
        Blue,
        Yellow

    } pixel;


    pixel = Blue;


    if(pixel == Red){
        printf("Red Pixel \n");
    }

    else if(pixel == Blue){
        printf("Blue Pixel \n");

    }
    else {

        printf("Yellow Pixel \n ");
    }

    return 0;
    
}