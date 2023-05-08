#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x;
    printf("digite um numero real para calcular-lo ao quadrado ");
    scanf("%f", &x);
    printf("\n o numero digitado ao quadrdado eh: %f", pow(x, 2));
    return 0;
}