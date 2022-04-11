#include<stdio.h>
int main (){
    int visa,final,ogrenciNo;
    float sonuc;

    printf("no giriniz");
    scanf("%d",&ogrenciNo);

    printf("visadan kaç aldınız ");
    scanf("%d",&visa);
    printf("finalden kaç aldınız ");
    scanf("%d",&final);
    sonuc = (visa*0.4)+(final*0.6);

    printf("%d nolu kişi, sonucunuz %f",ogrenciNo,sonuc);

    return 0;

}