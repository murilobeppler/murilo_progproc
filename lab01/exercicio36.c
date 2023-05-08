#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, V, R;
    const double pi = 3.141592;
    printf("digite a altura \n ");
    scanf("%f", &h);

    printf("digite o raio \n ");
    scanf("%f", &R);

    printf("\n volume do cilindro eh %.2f", V = h * R * R * pi);

    return 0;
}