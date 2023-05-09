#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float km, l, x;

    printf("digite quantos kilometros voce percorreu com o carro ");
    scanf("%f", &km);

    printf("digite quantos litros de gasolina foram utilizados para andar essa kilometragem ");
    scanf("%f", &l);

    x = km / l;

    if (x < 8)
    {
        printf("venda o carro");
    }
    else if (x >= 8 && x <= 14)
    {
        printf("carro economico");
    }
    else if (x > 14)
    {
        printf("super economico");
    }

    return 0;
}