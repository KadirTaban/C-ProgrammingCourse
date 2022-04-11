#include <stdio.h>

<<<<<<< HEAD
int main{

    int number ;
    int perfectivism;

    for(int i = 1; i<number ; i++){
=======
int main(){

    int number ;
    int perfectivism, samei;
    int sum = 0;

    scanf("%d",&number);

    for(int i = 1; i < number ; i++){
        samei = i;

        sum = 0;
        for(int j = 1 ; j < samei ; j++ ){
            
            perfectivism = samei % j ;

            if(perfectivism == 0){
                sum = sum + j;
                }



            }

            if(sum == i){
            printf("%d is a perfect number.\n",i);
            }

        
        



            
        }


    
>>>>>>> e3585a14e4139d0b335f8d7fe78ca21c98cb0904
        

    }





<<<<<<< HEAD
}
=======
>>>>>>> e3585a14e4139d0b335f8d7fe78ca21c98cb0904
