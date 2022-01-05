#include <stdio.h>
#include <string.h>


int main(){

    char metin[100];
    int i = 0, sayac = 0 ;
    printf("Enter Sentence");
    gets(metin);

for(int i = 0 ; metin[i] !='\0';i++){
        if(metin[i] == ' '){
            printf("(%d letters) \n",sayac);
            sayac = 0 ;
        }

        else{
            printf("%c",metin[i]);
            sayac++;

        }
        
    }
    printf("(%d letters) \n",sayac);
    return 0;
}