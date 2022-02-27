<<<<<<< HEAD
// prime numbers between 1 to n.
=======
>>>>>>> e3585a14e4139d0b335f8d7fe78ca21c98cb0904
#include <stdio.h>

int main()
{
<<<<<<< HEAD
    int n,c;
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        c = 0;
=======
    int n,check;
    printf("enter the value of n \n");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        check = 0;
>>>>>>> e3585a14e4139d0b335f8d7fe78ca21c98cb0904
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
<<<<<<< HEAD
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

      

=======
                check++;
            }
        }
        if (check == 0)
        {
            printf("%d is prime number \n",i); 
        }    
    } 
    
    return 0;
}
>>>>>>> e3585a14e4139d0b335f8d7fe78ca21c98cb0904
