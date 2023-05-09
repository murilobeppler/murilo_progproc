#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float salario, y;
    int anos, x;

    printf("qual o seu salario atual? ");
    scanf("%f", &salario);
    printf("a quanto tempo voce trabalha nessa empresa? ");
    scanf("%d", &anos);

    if (anos < 1)
    {
        x = 0;
    }

    if (anos >= 1 && anos <= 3)
    {
        x = 100;
    }

    if (anos >= 4 && anos <= 6)
    {
        x = 200;
    }

    if (anos >= 7 && anos <= 10)
    {
        x = 300;
    }

    if (anos > 10)
    {
        x = 500;
    }

    if (salario <= 500)
    {
        y = 1.25;
    }

    if (salario <= 1000 && salario > 500)
    {
        y = 1.20;
    }

    if (salario <= 1500 && salario > 1000)
    {
        y = 1.15;
    }

    if (salario <= 2000 && salario > 1500)
    {
        y = 1.10;
    }

    if (salario > 2000)
    {
        y = 1;
    }

    printf("seu salario depois da bonificacao e reajuste eh de: %.2f", (salario * y) + x);

    return 0;
}