#include <stdio.h>
#include <string.h>

void merge(char name1[], char name2[] );

int main(){

    char isim1[32];
    char isim2[32];
    gets(isim1);
    gets(isim2);
    merge(isim1,isim2);

}


void merge(char name1[], char name2[] ){
    strcat(name1,name2);

    puts(name1);
}