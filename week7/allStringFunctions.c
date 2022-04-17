#include <stdio.h>
#include <string.h>


int main(){
    char name[20], surname[20];
    int nameLen, surLen, ctr;

    strcpy(name,"Kadir");
    strcpy(surname,"Taban");

    nameLen = strlen(name);
    surLen = strlen(surname);

    ctr = strcmp(name, surname);  /* compare these one so name and surname  */
    if (ctr != 0)
    {
        name[nameLen] = ' ';
        strcat(name, surname);
        puts(name);
    }
    
}