#include <stdio.h>

int main(){
    int a;
     

    scanf("%d",&a);

for(int j=1;j<=a;j++){


    for(int i=2;i<j;i++){
        if(j%i==0){
            break;
        }
        else{
            printf("%d is prime\n",j);
        }

    }
    
    }

}