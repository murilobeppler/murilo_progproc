#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1415
// V = 4/3 π r³


float volumeesf (int x){
    return ((4*PI)*x*x*x)/3;
}

int main () 
{
    int r;
    float V;

    printf("digite o raio da esfera para calcularmos seu volume: ");
    scanf("%d",&r);

    V = volumeesf (r);

    printf("O volume da esfera eh: %f", V);

    return 0;
}