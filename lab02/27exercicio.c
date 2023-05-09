#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("digite sua idade:  ");
    scanf("%i", &x);

    if (x >= 5 && x <= 7)
    {
        printf("sua categoria eh infantil A");
    }
    else if (x >= 8 && x <= 10)
    {
        printf("sua categoria eh infantil B");
    }
    else if (x >= 11 && x <= 13)
    {
        printf("sua categoria eh juvenil A");
    }
    else if (x >= 14 && x <= 17)
    {
        printf("sua categoria eh juvenil B");
    }
    else if (x >= 18)
    {
        printf("sua categoria eh senior");
    }

    return 0;
}