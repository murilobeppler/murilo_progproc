#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float M, K;
    printf("digite uma velocidade em kilometro por hora e ela sera convertida em metro por segundo \n");
    scanf("%f", &K);

    M = K / 3.6;

    printf("essa velocidade em metro por segundo eh: %.2f m/s", M);

    return 0;
}
