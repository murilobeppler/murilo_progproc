#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float C, K;
    printf("digite uma temperatura em grau celsius para saber ela em kelvin ");

    scanf("%f", &C);

    K = C + 273.15;

    printf("a temperatura em kelvin eh: %.2f K", K);

    return 0;
}