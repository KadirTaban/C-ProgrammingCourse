/* Craps Game */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(0));

    int firstDice,secondDice,sum,point;
    printf("Zarlari salla\n");
    getchar();
    firstDice = (rand() % 6)+1;
    secondDice = (rand() % 6)+1;
    sum = firstDice+secondDice;


    while(1){
        if(sum == 7 || sum == 11){
            printf("You are winner.");
            point += sum;
            break;
        }else if( sum == 2 || sum == 3 || sum == 12){
            printf("You are loser.");
            point += sum;
            break;

        }else {
            point += sum;
        }
        while(sum != 7) {
            printf(" Roll the dice \n");
            getchar();
            firstDice = (rand() % 6)+1;
            secondDice = (rand() % 6)+1;
            printf("First dice is %d",firstDice);
            printf("Secon dice is %d",secondDice);
            sum = firstDice + secondDice;

            point += sum;
        }
        printf("You Won! \n");
        break;


    }
    printf("Your point = %d\n",point);

    return 0;


    

}