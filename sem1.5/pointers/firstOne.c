#include <stdio.h>

int main(){
    int a,*c,toplam;
    a = 4;
    c = &a;
    toplam = a+ *c;
    printf("%d",toplam);
    return 0;
}