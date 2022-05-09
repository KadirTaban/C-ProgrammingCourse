#include <stdio.h>

/* it is sorting from large to small  */
void bubbleSort(int dizi[], int n){

    int gecici;

    for (int i = 0 ; i<n; i++){

        for(int k = 0; k<n-1-i; k++){
            if(dizi[k]>dizi[k+1])
            {
                gecici = dizi[k];
                dizi[k] = dizi[k+1];
                dizi[k+1] = gecici;
            }
        }
    }
}

int main()
{
    int i = 0, a[5];
    printf("Siralamak istediğin 5 sayiyi gir \n");
    while (i<5)
    {
         scanf("%d",&a[i]);
         i++;

    }
    i=0;
    bubbleSort(a,5);
    printf("Bubble sor isleminden sonra.. \n");

    while (i<5){
        printf("%d", a[i]);
        i++;

    }
   return 0;
    
}