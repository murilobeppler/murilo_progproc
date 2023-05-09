#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int soma_algorismos(int x)
{
    int soma = 0;

    if (x < 0)
        return 0;

    while (x > 0)
    {
        soma += x % 10;

        x = x / 10;
    }

    return soma;
}

int main()
{
    int x, y;

    printf("digite um numero maior que zero e veja a soma de seus algorismos. \n numero: ");
    scanf("%d", &x);

    y = soma_algorismos(x);

    if (y == 0)
    {
        printf("numero invalido");
    }
    else
    {
        printf("\n A soma dos algorismos do numero %d eh: %d", x, y);
    }

    return 0;
}