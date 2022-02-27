#include <stdio.h>

int usAl(int sayilar[],int sayisayisi);

int main(){

    int c;
    scanf("%d",&c);

    int numbers[c];
    for(int i = 0 ; i<c ; i++){
        scanf("%d",&numbers[i]);
    }

    usAl(numbers,c);//numbers dizisini bunun içine yazarken koseli parantezler yazilmaz kural.
}


int usAl(int sayilar[],int sayisayisi){

    int same;
    
    for(int i = 0 ; i<sayisayisi;i++){
        same = sayilar[i];
        sayilar[i] =  same * sayilar[i];
        printf("%d karesi %d\n",same,sayilar[i]);

    }

    
    return 0;
}