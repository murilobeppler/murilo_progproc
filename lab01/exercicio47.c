#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.

int main()
{
    int x, y, z, w, q;
    printf("digite um numero de 1000 a 9999\n ");
    scanf("%d", &x);

    y = x % 10;
    x = x / 10;

    z = x % 10;
    x = x / 10;

    w = x % 10;
    x = x / 10;

    q = x % 10;

    printf("%d\n", q);
    printf("%d\n", w);
    printf("%d\n", z);
    printf("%d\n", y);

    return 0;
}