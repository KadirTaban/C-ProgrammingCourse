//Write C Program to Concatenate Two Strings.
#include <stdio.h>
#include <string.h>
int main(){

    char name[32];
    char surname[32];

    scanf("%s", name);
    scanf("%s",surname);

    strcat(name,surname);

    puts(name);
    


}
