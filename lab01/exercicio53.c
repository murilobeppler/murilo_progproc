#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.

int main()
{
    float c, l, p, x;

    printf("qual o comprimento do terreno\? (em metro) ");
    scanf("%f", &c);

    printf("qual eh a largura do terreno\? (em metro) ");
    scanf("%f", &l);

    printf("qual o preco por metro\? (em reais) ");
    scanf("%f", &p);

    x = ((c + l) * 2) * p;

    printf("por tanto, para cercar este terreno sera necessario %.2f reais ", x);

    return 0;
}