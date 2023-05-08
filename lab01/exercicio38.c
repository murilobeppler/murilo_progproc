#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float increase;
    increase = 1.25;
    float x;

    printf("qual o seu salario atual\? ");
    scanf("%f", &x);
    printf("o seu novo salario depois de 25%% de aumento eh: %.2f", x * increase);

    return 0;
}