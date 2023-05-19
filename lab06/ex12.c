#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

struct baralho
{
    int carta1, carta2, carta3;
    int naipe1,naipe2,naipe3;
};

int main()
{
    struct baralho jg1, jg2;
    int i;
    char espadas[7]="espadas",copas[5]="copas",paus[4]="paus",ouros[5]="ouros";

    srand(time(NULL));

    jg1.carta1 = rand() % 13 + 1;
    jg1.naipe1 = rand() % 4 + 1;

    jg1.carta2 = rand() % 13 + 1;
    jg1.naipe2 = rand() % 4 + 1;

    jg1.carta3 = rand() % 13 + 1;
    jg1.naipe3 = rand() % 4 + 1;

    jg2.carta1 = rand() % 13 + 1;
    jg2.naipe1 = rand() % 4 + 1;

    jg2.carta2 = rand() % 13 + 1;
    jg2.naipe2 = rand() % 4 + 1;

    jg2.carta3 = rand() % 13 + 1;
    jg2.naipe3 = rand() % 4 + 1;

    printf("O jogador 1 recebeu as seguintes cartas:\ncarta 1: %d de %s\ncarta 2: %d de %s\ncarta 3: %d de %s\n\n",jg1.carta1,);
    printf("O jogador 2 recebeu as seguintes cartas:\ncarta 1: %d de %s\ncarta 2: %d de %s\ncarta 3: %d de %s\n\n");

    return 0;
}