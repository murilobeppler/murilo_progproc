#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float P, C;

    printf("digite uma medida em polegada para saber-la em centimetros  \n");

    scanf("%f", &P);

    C = P * 2.54;

    printf("a medida fornecida convertida em centimetros eh: %.2f cm", C);

    return 0;
}
