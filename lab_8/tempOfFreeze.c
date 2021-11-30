#include<stdio.h>

int main() {

    int temp;

    printf("sıcaklık değeri giriniz: ");
    scanf("%d",&temp);

    if(temp>0){

        printf("sıcaklık 0'dan büyük");

    }
    else{
        printf("sıcaklık 0'dan küçük");
    }

    return 0;

}