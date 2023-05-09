#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i, x;
    x = 0;
    for (i = 0; i <= 100; i++)
    {

        printf("\n%i", x);
        x += 1000;
    }
    return 0;
}