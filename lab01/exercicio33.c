#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;

    printf("digite o valor do lado do quadrado: \n");
    scanf("%d", &x);

    y = x * x;

    printf(" a area do quadrado eh %d metros quadrados", y);

    return 0;
}