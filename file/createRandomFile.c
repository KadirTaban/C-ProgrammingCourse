#include <stdio.h>

struct musteri {
    int hesapNo;
    char soyad[25];
    char ad[20];
    double bakiye;
};

int main(){

    int i;
    struct musteri bosMusteri = {0,"","",0.0};

    FILE *myPtr;

    if ((myPtr == fopen("musteri.dat","w")) == NULL){
        printf("dosya olusturulamadi.\n");
    }else{
        for(i=1;i<100;i++){
            fwrite(&bosMusteri,sizeof(struct musteri),1,myPtr);
        }
        fclose(myPtr);
    }

    return 0;
}