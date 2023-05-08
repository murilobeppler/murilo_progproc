#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v, x, y, z;
    float n, a, w;
    n = 4;

    printf("digite quatro numeros e veja a media aritimetica deles");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    scanf("%f", &v);

    a = x + y + z + v;

    w = a / n;

    printf("\n%.2f", w);

    return 0;
}