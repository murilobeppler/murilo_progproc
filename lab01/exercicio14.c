#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float R, G;
    const double pi = 3.141592;

    printf("digite uma medida em graus para saber seu valor em radianos \n");

    scanf("%f", &G);

    R = G * pi / 180;

    printf("esta medida em radianos eh: %.2f rad", R);

    return 0;
}
