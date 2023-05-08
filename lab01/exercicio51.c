#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Escreva um programa que leia as coordenadas x e y de pontos no R 2 e calcule sua distância da origem (0, 0).

int main()
{
    float x, y, z;

    printf(" digite a cordenada x: ");
    scanf("%f", &x);

    printf(" digite a cordenada y: ");
    scanf("%.2f", &y);

    z = sqrt((x * x) + (y * y));

    printf("desta forma a distancia do seu ponto a origem eh: %f", z);

    return 0;
}