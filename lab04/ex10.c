#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float qual_maior (float a, float b){
    if (a>b) {
        return a;
    }
    if (b>a) {
        return b;
    }
}

int main () 
{
    float x,y,z;

    printf("digite dois numeros e retornaremos o maior deles. \n numeros: ");
    scanf("%f %f", &x,&y);

    z = qual_maior (x,y);

    printf("\n O maior numero eh: %.2f", z);

    return 0;
}