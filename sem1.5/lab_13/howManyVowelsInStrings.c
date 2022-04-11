#include <stdio.h>

void vowels(char str[]);

int main(){

    char user[32];
    gets(user);
    vowels(user);

}


void vowels(char str[]){
    int c = 0;
    for(int i = 0 ; str[i] != '\0';i++){

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'u'){
            c = c+1;
        }
    }
    printf("%d",c);
}