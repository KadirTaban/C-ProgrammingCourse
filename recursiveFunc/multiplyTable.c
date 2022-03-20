#include <stdio.h>

int tablo(int x) {
    int i ;
    if(x <= 10) {
        for ( i = 1 ; i<11; i++){
            printf("%-3d ", x*i);
            printf("\n");


        }


        return tablo(x+1);
    }else return 1;
    

}

int main(void) {
    int x = 1;
    tablo(x);
    return 0;
}