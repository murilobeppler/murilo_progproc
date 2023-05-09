#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void desenha_linha(int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("=");
    }
}

int main()
{
    int x;

    printf("digite qual o tamanho que vc quer que sua linha seja: ");
    scanf("%i", &x);

    desenha_linha(x);

    return 0;
}