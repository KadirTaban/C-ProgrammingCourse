/*
void *malloc(size_t eleman_sayısı);

 Bellekte herbiri size_t tipinde olan eleman_sayısı kadar yer (bellek bloğu) ayırır.
 Bu yer verilmezse geriye NULL gönderir. */

#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i; 
float *x, toplam, ort;
while(1) {
 /* dizinin eleman sayısı okunuyor */
printf("\nEleman sayısını girin: ");
scanf("%d",&n);
 /* eleman sayısı <= 0 ise dögüden çık */
if( n<=0 ) break; /* bellekten yer isteniyor */
x = (float *) malloc( sizeof(float)*n ); 
/* istenen yer ayrıldı mı? */
if( x == NULL ){ puts("Yetersiz bellek alanı");
exit(1);
}
/* elemanlar tek tek belleğe yazılıp toplamları hesaplanıyor */
for(toplam =0.0, i=0; i<n; i++){
printf("%d. eleman: ",i+1);
scanf("%f",&x[i]);
toplam += x[i];
}
ort = toplam / n;
printf("Ortalama = %f\n",ort);
/* ayrılan alan boşaltılıyor */
free(x); }
return 0;
}