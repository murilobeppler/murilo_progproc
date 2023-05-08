#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, z, w;

    printf("qual valor da sua hora de trabalho em reais\?\n ");
    scanf("%f", &x);
    printf(" e quantas horas por mes voce trabalha\? \n");
    scanf("%f", &y);
    w = x * y;
    z = 1.1 * w;

    printf("assim, seu salario mensal com um acrescimo de 10%% no valor eh de %.2f", z);

    return 0;
}