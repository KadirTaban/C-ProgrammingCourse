#include <stdio.h>

int main(){

    int terms ;
    scanf("%d",&terms);
    int array[terms];
    int reverseArray[terms];
    int sameTerms = terms;
    int t = terms-1;


    for(int i = 0;terms>i; i++){
        scanf("%d",&array[i]);

    }
    for (int i = 0; i < terms; i++)
    {
        
        reverseArray[t] = array[i];
        t--;
    }

    for(int i = 0; i<sameTerms;i++){
    printf("%d",reverseArray[i]);
    }



}
