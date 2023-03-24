#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float y,z,w;
    double x;
    x=780000;
    printf("o valor a ser iniciado a divisao por 3 eh 780 000");
    y=0.46*x;
    z= 0.32* x;
    w = 0.12* x;
    printf("\n\no participante que recebe 46%% do valor inicial eh de %.1f reais ", y);
    printf("\n\no participante que recebe 32%% do valor inicial eh de %.1f reais", z);
    printf("\n\no participante que recebe 12%% do valor inicial eh de %.1f reais", w);


    return 0;
}