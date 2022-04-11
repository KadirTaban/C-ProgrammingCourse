//Write C Program to Remove all Characters in a String Except Alphabet
#include <stdio.h>
#include <string.h>

int main(){
    char str[150],a;
    int i,j;
    printf("\n Enter a string : ");
    scanf("%s",str);
    for(i = 0; str[i] != '\0'; i++){
        a=str[i];
        if(a >= 'A' && a <= 'Z' || a >='a' && a <='z'){
            printf("%c",a);
        }
        
    }
    


}