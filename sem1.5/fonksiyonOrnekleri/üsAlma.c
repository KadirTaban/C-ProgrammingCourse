#include <stdio.h>

int usAlma(int sayi,int us);

int main(){

    int number;
    int us;
    int result;
    scanf("%d",&number);
    scanf("%d",&us);

    result = usAlma(number,us);

    printf("%d",result);


}

int usAlma(int sayi, int us){
    int a ;

    a = sayi;
    for(int i = 1; i<us;i++ ){
        sayi = sayi*a;

    }

    return sayi;

}