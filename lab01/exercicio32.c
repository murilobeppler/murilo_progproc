#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, z;

    printf("digite um numero inteiro: \n");
    scanf("%d", &x);

    z = 3 * x + 1 + 2 * x - 1;

    printf("a soma do sucessor de seu triplo com o antecessor de seu dobro  eh %d", z);

    return 0;
}