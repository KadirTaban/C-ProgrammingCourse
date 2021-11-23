#include <stdio.h>

int main(){
    int para;
    int a;
    int b;
    int c;
    int d;

    scanf("%d",&para);
    
    a= para/100;
    para = para%100;
    

    b = para/50;
    para = para%50;
    
    c = para/20;
    para = para%20;

    d = para/10;
    para=para%10;
    
    printf(" 100 lük banknot sayısı %d",a);
    printf(" 50 lük banknot sayısı %d",b);
    printf(" 20 lük banknot sayısı %d",c);
    printf(" 10 lük banknot sayısı %d",d);

    return 0;
}