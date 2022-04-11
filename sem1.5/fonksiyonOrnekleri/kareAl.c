#include <stdio.h>

int kare_al(int sayi); //burada nasıl bir fonksiyon yazacağını bildiriyorsun. Icine yazdigin variable ise fonksiyonu yazarken kullacagın deger.

int main(){//burası normalde olusturdugumuz c fonksiyonu

    int number;
    int square;

    scanf("%d",&number);

    square = kare_al(number);//assagida yazdigimiz fonksiyonu buraya cagirdik icine de olabilecek bir deger verdik yani kare_al("kadir") olamayacagi icin

    printf("%d sayisinin karesi %d dir",number,square);

    return 0;
    

}

int kare_al(int sayi)
{
    return sayi*sayi;
 // fonksiyonda olandan bitenden sonra bir şey döndürmen gerekiyor bir sonuc 
}

