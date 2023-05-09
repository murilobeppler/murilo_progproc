#include <stdio.h>

int main()
{
    int hc, mc, hp, mp, tc, tp, d, dh;
    float v = 0;
    printf("Digite as horas e minutos da chegada:\n");
    scanf("%d%d", &hc, &mc);
    printf("Digite as horas e minutos da partida:\n");
    scanf("%d%d", &hp, &mp);
    if (hc > hp)
        hc -= 24;
    tc = hc * 60 + mc;
    tp = hp * 60 + mp;
    d = tp - tc;
    if (d % 60 > 0)
    {
        dh = d / 60 + 1;
    }
    else
    {
        dh = d / 60;
    }
    if (dh <= 2)
    {
        v = dh * 1;
    }
    else if (dh <= 4)
    {
        v = dh * 1.4;
    }
    else
    {
        v = dh * 2;
    }
    printf("O valor a pagar eh:\nR$%.2f", v);
    return 0;
}