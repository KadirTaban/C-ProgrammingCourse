#include <stdio.h>

float square(float r);


int main(){
    float r;
    printf("bir yaricap degeri giriniz: \n");   
    scanf("%f",&r);

    printf("alan: %f", square(r));


}


float square(float r){
    float area;
    float pi=3.14;

    area = pi*r*r;

    return area;
}