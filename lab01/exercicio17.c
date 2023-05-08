#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float P, C;

    printf("digite uma medida em centimetros para convertela em polegadas \n");

    scanf("%f", &C);

    P = C / 2.54;

    printf("a medida fornecida convertida em polegadas eh: %.2f polegadas", P);

    return 0;
}