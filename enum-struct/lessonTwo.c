#include <stdio.h>

typedef int TAMSAYI;


typedef struct 
    {
        unsigned int yil ;
        char *tur;
        unsigned int sure;
        char *isim;
    } Film;


    int main(){

        Film film1;
        film1.isim = "Kadir";
        film1.yil = 2001;
        film1.tur = "Biografi";
        film1.sure = 132;


        TAMSAYI yassiniri=18;

        printf("Yas siniri %d olan %s filmi %d yapimi olup %s türünde %d süresiyle gişelerde! ",yassiniri,film1.isim,film1.yil,film1.tur,film1.sure);
    }       