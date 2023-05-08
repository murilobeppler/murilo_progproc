#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float percentage;
    percentage = 0.88;
    float x;
    printf("qual o valor do produto\?\n");
    scanf("%f", &x);
    printf("o produto com 12%% de desconto eh %.2f", x * percentage);

    return 0;
}