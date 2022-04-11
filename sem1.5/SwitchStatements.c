#include <stdio.h>
#include <stdlib.h>

int main(){



    char grade;
    scanf("%c",&grade);

    switch(grade){
    case 'A' : 
        printf("You did great!");
        break;

    case 'B':
        printf("You did alright!");
        break;

    case 'C':
        printf("You did poorly");
        break;
    case 'D':
        printf("You did very bad");
        break;
    case 'F':
        printf("You Failed!");
        break;
    default:
        printf("Invalid Grade");
    }


    

    
    return 0;

}