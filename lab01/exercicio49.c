#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, minuto e segundo) do termino da mesma.

int main()
{
    int h, m, s, d, x;
    int H, M, S;

    printf("digite respectivamente a hora,minuto e segundo do inicio do experimento ");
    scanf("%i", &h);
    scanf("%i", &m);
    scanf("%i", &s);

    printf("qual a duracao do experimento em segundos\?");
    scanf("%i", &d);

    S = (s + d) % 60;
    M = (m + (s + d) / 60) % 60;
    H = (h + (m + (s + d) / 60) / 60) % 24;

    printf("o final do experimento terminara as %d horas, %d minutos e %d segundos", H, M, S);
    return 0;
}