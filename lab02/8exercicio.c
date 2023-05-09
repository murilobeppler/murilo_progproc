#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("digite a sua primeira nota ");
    scanf("%f", &x);

    printf("digite a sua segunda nota ");
    scanf("%f", &y);

    z = (x + y) / 2;

    if (x >= 0 && x <= 10 && y >= 0 && y <= 10)
    {
        printf("a media das duas notas eh %.2f", z);
    }
    else
        printf("reinicie o programa e coloque um numero valido de nota na proxima vez ");
    return 0;
}