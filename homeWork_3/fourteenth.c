
//Write C code for computing factorial N (N!)
#include<stdio.h>

int main(){


int number,fac;
    scanf("%d",&number);
    fac = number;//for condition'unun içinde verdiğimiz term değerini sabit tutabilmek icin

    for(int i=1;i<fac;i++){//eger burada number değeri alıp devam etseydik number her döngüde degisecekti.
        number = number*i;

    }

    printf("%d",number);

    return 0;
}