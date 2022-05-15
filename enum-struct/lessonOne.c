#include <stdio.h>

struct film
    {
        unsigned int yil ;
        char *tur;
        unsigned int sure;
        char *isim;
        
    };

int main(){

    
    struct film film1;

    film1.yil = 2001;
    film1.tur = "Drama";
    film1.sure = 142;
    film1.isim = "Esaretin Bedeli";


    printf("filmin cikis tarihi %d,\nfilm türü %s, \nfilm süresi %d,\nfilm adi %s", film1.yil,film1.tur,film1.sure,film1.isim);
}