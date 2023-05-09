#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x, y, z, w;
    printf("digite um numero  ");
    scanf("%f", &x);

    printf("digite mais um numero  ");
    scanf("%f", &y);

    z = x - y;
    w = y - x;

    if (x > y)
    {
        printf("%.0f eh maior que %.0f\n\n", x, y);
    }
    else
        printf("%.0f eh maior que %.0f\n\n", y, x);

    if (x > y)
    {
        printf("e a diferenca entre estes dois numeros eh %.0f", z);
    }

    else
        printf("e a diferenca entre estes dois numeros eh %.0f", w);

    return 0;
}