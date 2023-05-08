#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float K, L;

    printf("digite um valor em quilograma e veja-o convertido em libras \n");
    scanf("%f", &K);
    L = K / 0.45;
    printf("%.2f libras", L);

    return 0;
}
