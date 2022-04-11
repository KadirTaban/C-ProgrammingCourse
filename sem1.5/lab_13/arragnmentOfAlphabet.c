#include <stdio.h>
#include <string.h>

void displayString(char str[]);


int main(){

    char str[132];
    gets(str);
    displayString(str);

    return 0;


}

void displayString(char str[]){
    
    char max ;

    for(int i = 0 ; str[i] != '\0' ; i++){

        for(int j = 0 ; str[j] != '\0' ; j++){

            if(str[i]<str[j]){
                max = str[i];
                str[i] =str[j];
                str[j] = max;
            }
        }

    }
    
        puts(str);
    
    


}