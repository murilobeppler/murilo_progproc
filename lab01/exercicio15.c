#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float R, G;
    const double pi = 3.141592;

    printf("digite uma medida em radiano para saber seu valor em graus \n");

    scanf("%f", &R);

    G = R * 180 / pi;

    printf("esta medidae em graus eh: %.2f graus", G);

    return 0;
}