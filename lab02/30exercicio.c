#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("digite tres numeros: ");
    scanf("%i%i%i", &x, &y, &z);

    if (x >= y && y >= z)
        printf("os numeros digitados em ordem crescente sao: %d, %d, %d ", z, y, x);
    else if (x >= z && z >= y)
        printf("os numeros digitados em ordem crescente sao: %d, %d, %d ", y, z, x);
    else if (y >= x && x >= z)
        printf("os numeros digitados em ordem crescente sao: %d, %d, %d ", z, x, y);
    else if (y >= z && z >= x)
        printf("os numeros digitados em ordem crescente sao: %d, %d, %d ", x, z, y);
    else if (z >= y && y >= x)
        printf("os numeros digitados em ordem crescente sao: %d, %d, %d ", x, y, z);
    else if (z >= x && x >= y)
        printf("os numeros digitados em ordem crescente sao: %d, %d, %d ", y, x, z);

    return 0;
}