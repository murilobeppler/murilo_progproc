#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fat(int n)
{
    if (n == 1)
        return 1;
    else
    {
        return n * fat(n - 1);
    }
}

int main()
{
    int n, y;

    printf("digite um numero para ser calculado seu fatorial: ");
    scanf("%d", &n);

    y = fat(n);

    printf("o fatorial de %d eh: %d", n, y);

    return 0;
}