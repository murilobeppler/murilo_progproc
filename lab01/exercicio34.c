#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int R;
    float z;
    double const pi = 3.141592;

    printf("digite o valor do raio \n");
    scanf("%d", &R);

    z = 2 * pi * R;

    printf("a area da circunferencia %.2f", z);

    return 0;
}