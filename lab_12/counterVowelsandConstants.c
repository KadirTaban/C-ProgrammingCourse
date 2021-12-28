#include <stdio.h>
#include <string.h>
int main(){

    char str[150];
    int v=0;
    int c = 0;
    int d = 0;
    int space = 0;
    printf("Enter a string line: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'u'){

            v = v+1;
            


        }
        else if(str[i] == ' '){

            space = space +1 ;
        }
        

        else if (str[i]== '0' || str[i] == '1' || str[i] == '2' || str[i] == '3'|| str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8'|| str[i] == '9'  ){
            d++;

        }
        else{
            c++;
        }
        
    }
    printf("digits %d",d);
    printf("spaces %d",space);
    printf("vowels %d",v);
    printf("constants %d",c);
}