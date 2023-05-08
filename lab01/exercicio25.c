#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, M;

    printf("digite uma area em acres e veja-a convertida em metros quadrados \n");
    scanf("%f", &A);
    M = A * 4048.58;
    printf("%.2f metros quadrados", M);

    return 0;
}