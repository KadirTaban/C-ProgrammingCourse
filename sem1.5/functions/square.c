#include <stdio.h>

int kareAl(int x);

int main(){

    int sayac;
    for(sayac = 1; sayac <= 10;sayac++){

        printf("sayi: %d karesi: %d \n",sayac,kareAl(sayac));
    }


}

    int kareAl(int x )
    {
        
        return x*x;
    }