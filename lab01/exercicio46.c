#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número formado pelos dígitos invertidos do número lido. Exemplo: numero_lido = 123 numero_gerado = 321

int main()
{
    int x, y, z, w;
    printf("digite um numero de 100 a 999\n ");
    scanf("%d", &x);

    y = x % 10;
    x = x / 10;

    z = x % 10;
    x = x / 10;

    w = x % 10;

    printf("%d", y);
    printf("%d", z);
    printf("%d", w);

    return 0;
}