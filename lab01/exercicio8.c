#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float C, K;

    printf("digite uma temperatura em kelvin para saber ela em grau celsius ");

    scanf("%f", &K);

    C = K - 273.15;

    printf("essa temperatura em grau celsius eh: %.2f C", C);

    return 0;
}
