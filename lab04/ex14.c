#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int consumo_km_l (float km, float l) {
    return km/l;
}

int main () 
{
    float km,l;
    int x;

    printf("digite qual foi a distancia percorrida pelo carro: ");
    scanf("%f", &km);

    printf("\ndigite quantos litros foram gastos no percurso: ");
    scanf("%f", &l);

    x = consumo_km_l (km,l);

    if (x<8) printf("\nvenda o carro!");
    else if (x>=8 && x<=14) printf("\neconomico!");
    else if (x>14) printf("\nsuper economico!");

    return 0;
}