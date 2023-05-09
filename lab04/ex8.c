#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float hipotenusa (float a, float b) {
   return sqrt ((a*a) + (b*b));
}

int main () 
{
    float a,b,h;

    printf("digite os valores dos dois catetos para saber o valor de sua hipotenusa: ");
    scanf("%f %f", &a,&b);

    h = hipotenusa (a,b);

    printf("\n O valor da hipotenusa deste triangulo eh: %.2f", h);

    return 0;
}