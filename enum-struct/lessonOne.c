#include <stdio.h>
#include <stdlib.h>
struct film //structer's name is film.
    {
        unsigned int yil ;
        char *tur;
        unsigned int sure;
        char *isim;
        
    };

int main(){

    
    struct film film1; //def variable

    film1.yil = 2001;
    film1.tur = "Drama";
    film1.sure = 142;
    film1.isim = "Esaretin Bedeli";


    printf("filmin cikis tarihi %d,\nfilm türü %s, \nfilm süresi %d,\nfilm adi %s", film1.yil,film1.tur,film1.sure,film1.isim);

    struct film film2 = {1952,"Wuhuw"};//give init value.
    printf("\n %s", film2.sure);//return null value.

    struct film* film3;
    film3 = (struct film*)malloc(sizeof(struct film));//allocate for struct
   (*film3).tur = "Crime";
   (*film3).isim = "Trawks";
   (*film3).sure = 124;
   (*film3).yil = 2001;

   printf("%s: \n %4d %4d Dakika %s",film3->isim,film3->yil,film3->sure,film3->tur);

   return 0;
    
}