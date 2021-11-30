#include<stdio.h>

int main(){

    float celcius;
    float fahrenheit;

    
    scanf("%f",&celcius);
    
    fahrenheit = (celcius*9/5)+32;

    printf("%f celcius %f fahrenheit'e eşittir.",celcius,fahrenheit);

}