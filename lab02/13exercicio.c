#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float p1, p2, p3;
    float x;
    float a, b, c;
    a = 1;
    b = 1;
    c = 2;

    printf("digite a nota da prova 1 , prova 2 , prova 3\n");
    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);

    p3 = p3 * 2;
    x = (p1 + p2 + p3) / (a + b + c);

    printf("a media ponderada das tres provas foi %.2f\n", x);

    if (x >= 60)
    {
        printf("\nparabens voce foi aprovado");
    }
    else
    {
        printf("\ninfelizmente voce foi reprovado ");
    }

    return 0;
}