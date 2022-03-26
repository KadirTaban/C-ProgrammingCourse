#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    char name [] = "Kadir";
    char surname[] = "Taban";

    int lenName= strlen(name);
    int lenSurname = strlen(surname);
    int i = 0;

    char *ptr;

    ptr = (char*)malloc(lenName);

    
   
    ptr = (char*)realloc(ptr,lenName+lenSurname+1);
    for(i=0;i<lenName;i++){
        strcpy(&ptr[i],&name[i]);
    }
    *(ptr+i)=' ';
    i++;
    
    for(int j = 0 ; j<lenSurname ; j++){
        strcpy(&ptr[i],&surname[j]);
        i++;
    }

    for(int j = 0 ; j< lenName+lenSurname+1;j++){
        printf("%c",ptr[j]);
    }
}