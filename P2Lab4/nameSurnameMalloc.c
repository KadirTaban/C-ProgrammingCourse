#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char name[] ="kadir";
    char surname[] ="taban";
    int i = 0;
    char *ptr;
    int lenName = strlen(name);
    int lenSurname = strlen(surname);



    ptr = (char*)malloc((lenName+lenSurname+1)*sizeof(char));

    for(i = 0 ; i<lenName; i++){
        strcpy(&ptr[i],&name[i]);
    }
    strcpy(&ptr[i]," ");
    i++;

    for(int j = 0 ; j<lenSurname; j++){
        strcpy(&ptr[i],&surname[j]);
        i++;
    }

    for(int k = 0 ; k < lenName+lenSurname+1;k++){
        printf("%c",ptr[k]);
    }

    


}