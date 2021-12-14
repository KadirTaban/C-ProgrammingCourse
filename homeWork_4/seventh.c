// prime numbers between 1 to n.
#include <stdio.h>

int main()
{
    int n,c;
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        c = 0;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                c++;
            }
        }
        if (c == 0)
        {
            printf("%d is prime number \n",i); 
        }    
    }

    return 0;
}
