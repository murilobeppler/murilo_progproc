#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float M, K;

    printf("digite uma distancia em kilometro e ela sera convertida em milha \n");

    scanf("%f", &K);

    M = K / 1.61;

    printf("esta distancia em milha eh: %.2f milhas", M);

    return 0;
}