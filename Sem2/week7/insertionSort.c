#include <stdio.h>

void insertionSort(int dizi[], int n ){

    int ekle, k, i;

    for(i = 1; i<n; i++){
        for(k=i-1; k>=0 && ekle <= dizi[k];k--)
            dizi[k+1] = dizi[k];
        dizi[k+1] = ekle;
    }
}

int main(){
    int i = 0, a[5];
    printf("Siralamak istediğin 5 sayi girin ")
}