#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("digite um numero positivo para saber sua raiz quadrada ou digite um numero negativo para saber se valor ao quadrado \n");
    scanf("%f", &x);

    if (x >= 0)
    {
        printf("\na raiz quadrada do numero eh %.0f", sqrt(x));
    };

    if (x < 0)
    {
        printf("\n o numero digitado ao quadrado eh %.0f", pow(x, 2));
    };

    return 0;
}