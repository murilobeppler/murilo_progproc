#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float M, K;

    printf("digite uma distancia em milha e ela sera convertida em kilometro \n");

    scanf("%f", &M);

    K = 1.61 * M;

    printf("esta distancia em kilometros eh %.2f km", K);

    return 0;
}