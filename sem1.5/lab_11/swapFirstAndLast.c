#include <stdio.h>
#include <string.h>

int main(){
    int k = 0;
    char str[40],temp;
    scanf("%s",str);

    while(str[k] != '\0'){

        k++;
    }
    temp = str[0];
    str[0] = str[k-1];
    str[k-1] = temp;
    puts(str);

}