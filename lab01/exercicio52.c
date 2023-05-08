#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no valor investido.

int main()
{
    float x, y, z, t, v;
    float a, b, c; // valores que cada jogador ira ganhar

    printf("qual o valor do premio\? ");
    scanf("%f", &v);

    printf("quanto o primeiro jogador apostou\? ");
    scanf("%f", &x);

    printf("quanto o segundo jogador apostou\? ");
    scanf("%f", &y);

    printf("quanto o terceiro jogador apostou\? \n");
    scanf("%f", &z);

    t = x + y + z;

    a = (x * v) / t;

    b = (y * v) / t;

    c = (z * v) / t;

    printf(" o primeiro jogador ganhou: %.2f", a);
    printf(" o segundo jogador ganhou: %.2f", b);
    printf(" o terceiro jogador ganhou: %.2f", c);

    return 0;
}