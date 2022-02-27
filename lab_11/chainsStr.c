#include <stdio.h>
#include <string.h>
int main(){
    char str[40];

    scanf("%s",str);

    int k = 0;
    char a = '`';
    char A = '@';
    char Z = 'Z';
    char z = 'z';

    while(str[k] != '\0'){
        
        if(str[k] == z ){
            str[k] = a;
        }
        if(str[k] == Z ){
            str[k] = A;
        }
        str[k] = str[k]+1;
        k++;
       
        
         

        
    }

    puts(str);
}