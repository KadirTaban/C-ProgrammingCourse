#include <stdio.h>

int main(){

    int r;
    float sonuc;
    int islemtürü;
    float pi;

    pi=3.14;

    printf("islem türü giriniz ");
    scanf("%d",&islemtürü);


    
    printf("yarıcapı giriniz");
    scanf("%d",&r);

    if(islemtürü == 1){
        sonuc = 2*pi*r ;
        printf("cevre %f",sonuc);
    }
    else if (islemtürü == 2){
        sonuc = (pi*r*r);
        printf("alan %f",sonuc);

    }
    else {
        printf("tanımlı bir işlem yapınız.1 or 2");
    }

    return 0;
}