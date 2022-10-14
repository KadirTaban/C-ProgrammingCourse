#include <stdio.h>

int main(void){
    

    int hesapNo;
    char ad[40];
    double bakiye;

    FILE *mfPtr;

    if((mfPtr = fopen("musteri.txt","r")) == NULL ){
        printf("Dosya acilamadi \n");

    }else{
        printf("%-10s%-13s%s \n","HesapNo","Ad","Bakiye");
        fscanf(mfPtr, "%d %s %lf",&hesapNo,ad,&bakiye);
        while(!feof(mfPtr)){ //file pointer
            printf("%-10d%-13d%7.2f\n",hesapNo,ad,bakiye);
            fscanf(mfPtr,"%d%s%lf",&hesapNo,ad,&bakiye);
        }
    }

}