#include <stdio.h>


void kareAl(int sayi);

int main(){

    int number;
    printf("bir sayi degeri giriniz: ");
    scanf("%d",&number);
    kareAl(number);

    return 0;

}

void kareAl(int sayi){

    int sonuc;

    sonuc = sayi*sayi;

    printf("%d nin karesi %d",sayi,sonuc);
}