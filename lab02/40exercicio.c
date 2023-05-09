#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float custo, dist, imp;

    printf("qual o custo de fabrica?  ");
    scanf("%f", &custo);

    if (custo <= 12000)
    {
        dist = 0.05 * custo;
        printf("o preco final do carro eh de: %.2f", custo + dist);
    }

    else if (custo > 12000 && custo <= 25000)
    {
        dist = 0.10 * custo;
        imp = 0.15 * custo;
        printf("o preco final do carro eh de: %.2f", custo + dist + imp);
    }

    else
    {
        dist = 0.15 * custo;
        imp = 0.20 * custo;
        printf("o preco final do carro eh de: %.2f", custo + dist + imp);
    }
    return 0;
}