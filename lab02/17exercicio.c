#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float B, b, h, x;

    printf("qual o tamanho da base maior\? ");
    scanf("%f", &B);

    printf("qual o tamanho da base menor\? ");
    scanf("%f", &b);

    printf("qual o tamanho da altura\? ");
    scanf("%f", &h);

    if (B < 0 || b < 0)
    {
        printf(" \nvalor nao valido inserido nas bases");
    }
    else
    {
        printf("\n a area do trapezio eh %.2f", x);
    }

    x = ((B + b) * h) / 2;

    return 0;
}