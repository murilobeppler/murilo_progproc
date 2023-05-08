#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float C, F;

    printf("digite uma temperatura em grau celsius para saber ela em grau farenheit ");

    scanf("%f", &C);

    F = C * (9.0 / 5.0) + 32.0;

    printf("\n a temperatura em farenheit eh: %.2f F", F);

    return 0;
}