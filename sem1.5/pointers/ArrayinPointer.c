#include <stdio.h>

int main(void ){
    int elm;
    int month[12];
    int *ptr;

    ptr = month;/* month[0]'ın adresini ptr'ye ata. */
    elm = ptr[3]; /* elm = mont[3] */
    ptr = month + 3; /* ptr, month[3] adresini göstersin */
    ptr = &month[3]; /* ptr, month[3] adresini göstersin */
    elm = (ptr+2)[2];/* elm = ptr[4] (= month [ 7 ].) */
    elm = *(month + 3);
    ptr = month; /* month[0]'ın adresini ptr'ye ata. */
    elm = *(ptr+2;); /* elm = month[2] */
    elm = *(month+1); /* elm = month[1] */

    return 0;
}