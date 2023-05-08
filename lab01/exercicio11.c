#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float M, K;

    printf("digite uma velocidade em metro por segundo e ela sera convertida em kilometro por hora \n");

    scanf("%f", &M);

    K = M * 3.6;

    printf("a velocidade em kilometro por hora eh: %.2f km/h", K);

    return 0;
}