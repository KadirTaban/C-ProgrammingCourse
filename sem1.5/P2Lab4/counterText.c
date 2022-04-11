#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Karabük Universitesi", *ptr;
    int len = strlen(str);
    int counter=0;
    ptr = str;
    for(int i = 0 ; len>i ; i++){
        for(int j = 0 ; len>j; j++){
            if(*(ptr+i) == *(ptr+j)){
                counter++ ;
            }

        }
        printf(" %c den %d\n",*(ptr+i),counter);
        counter = 0 ;
        
    }
}