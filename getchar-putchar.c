#include <stdio.h>

/*copy input to output; 1sr version*/

main()
{
    int c;

    c= getchar();
    while( c != EOF) {
        putchar(c);
        c = getchar();

    }

}