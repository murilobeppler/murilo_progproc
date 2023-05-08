#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m3, L;

    printf("digite uma medida em metros cubicos para ser convertida em litros \n");
    scanf("%f", &m3);
    L = 1000 * m3;
    printf("essa medida em litros eh: %.2f L", L);

    return 0;
}