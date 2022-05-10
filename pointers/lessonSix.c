// Character Arrays and pointers
// how to work python print in C ?
#include <stdio.h>
#include <string.h>
void print(char* C){
    
    while (*C != '\0')
    {
        printf("%c",*C);
        C++;
    }
    printf("\n");
    

}
int main(){
    char C[20] = "Hello";
    print(C);

}