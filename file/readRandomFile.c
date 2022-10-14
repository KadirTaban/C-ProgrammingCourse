#include <stdio.h>


struct musteri{
    int hesapNo;
    char soyad[25];
    char ad[20];
    double bakiye;
    
};

int main(){

    struct musteri hesapBilgi = {0,"","",0.0};
    FILE *myPtr;

    if((myPtr = fopen("musteri.txt","a+")) == NULL){
        printf("File couldn't be open.\n");
    }
    else{
        printf("%-10s%-16s%-11s%10s\n","HesapNo","Soyad","Ad","Bakiye");
        while (!feof(myPtr)){
            fread(&hesapBilgi,sizeof(struct musteri),1,myPtr);
            if(hesapBilgi.hesapNo != 0){
                printf("%-10d%-16s%-11s%10.2f\n", hesapBilgi.hesapNo,hesapBilgi.soyad,hesapBilgi.ad,hesapBilgi.bakiye);

            }
            fclose(myPtr);
        }
        getchar();
        return 0;
    }
}