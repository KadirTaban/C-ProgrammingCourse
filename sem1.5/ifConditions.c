#include <stdio.h>

int main (){
    int sayi1;
    int sayi2;

    printf("sayi giriniz: ");
    scanf("%d",&sayi1);
    printf("sayi giriniz: ");

    scanf("%d",&sayi2);

    if (sayi1>sayi2) {
        printf("%d is greater than %d",sayi1,sayi2);

    }
    else if (sayi1 == sayi2){
        printf("girdiğiniz değerler birbirine eşit.");
    }

    else {
        printf("%d is greater than %d",sayi2,sayi1);
    }

    return 0;

}