#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,a=100;

    int result ; 
    int six,five,four,three,two,one;
    


    for (i=1 ; a>i;i++){
        result = rand() %6 +1;
        //printf("%d \n",result);

    

    if (result == 6){

        six++;
    }
    else if (result == 5){

        five++;
    }
    else if (result == 4){

        four++;
    }
    else if (result == 3){

        three++;
    }
    else if (result == 2){

        two++;
    }
    else if (result == 1){

        one++;
    }

    
    }
    printf("bu kadar %d  6 var\n",six);
    printf("bu kadar %d 5 var\n",five);
    printf("%d 4 var \n",four);
    printf("%d 3 var \n",three);
    printf("%d 2 var\n",two);
    printf("%d 1 var \n",one);






    
    return 0;
}