#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, a, b, c, d;

    printf(" digite um numero de tres digitos");
    scanf("%d", &x);

    if (x > 0)
    {
        a = x % 10;

        x = x / 10;

        b = x % 10;

        x = x / 10;

        c = x % 10;

        d = a + b + c;

        printf("a soma dos algoritimos digitado eh %i", d);
    }

    if (x < 0)
    {
        printf(" numero invalido");
    }

    return 0;
}