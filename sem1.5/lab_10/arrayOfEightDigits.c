#include <stdio.h>

int main()
{
    float array[8];
    float sum = 0;

  for(int i = 0 ; 8>i ; i++){
      scanf("%f",&array[i]);
      sum = sum +array[i];

  }
    sum = sum /8;

    printf("%f",sum);
  

}