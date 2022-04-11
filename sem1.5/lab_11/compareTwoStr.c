#include <stdio.h>
#include <string.h>

int main(){

    char str1[40];
    char str2[40];

    int value = 0 ;
    scanf("%s",str1);
    scanf("%s",str2);

    value = strcmp(str1,str2);

    if(value == 0){

        printf("string are same.");
    }
    else{
        printf("strings are not same.");
    }

    return 0 ; 
}