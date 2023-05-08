#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, M;

    printf("digite uma area em metros quadrados e veja-a convertida em acres \n");
    scanf("%f", &M);
    A = M * 0.000247;
    printf("%.2f acres", A);

    return 0;
}