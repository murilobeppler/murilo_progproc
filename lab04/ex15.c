#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int qual_triangulo (float x, float y, float z){
    if (x<0 || y<0 || z<0 || x+y<z || x+z<y || z+y<x) return 0;
    else if (x!=y && x!=z && z!=y) return 1;
    else if (x==y && x==z && z==y) return 2;
    else if (x==y || y==z || x==z) return 3;
}

int main () 
{
    float x,y,z;
    int a;

    printf("digite os valores de tres lados de um triangulo para verificar qual tipo de triangulo ele forma. \n tamanho dos lados:\n ");
    scanf("%f %f %f", &x, &y, &z);

    a = qual_triangulo (x,y,z);

    if (a==0) printf("\nestes valores nao formam um triangulo");
    if (a==1) printf("\neste triangulo eh escaleno");
    if (a==2) printf("\neste triangulo eh equilatero");
    if (a==3) printf("\neste triangulo eh isoceles");

    return 0;
}