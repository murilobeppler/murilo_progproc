#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct vetor {
    float x,y,z;
};

int main() {
    struct vetor a, b;
    float w,e,r;

    printf("digite o valor das coordenadas x,y,z de um vetor: ");
    scanf("%f %f %f",&a.x, &a.y, &a.z);

    printf("digite novamente o valor das coordenadas x,y,z de um outro vetor: ");
    scanf("%f %f %f",&b.x, &b.y, &b.z);

    w = a.x + b.x;
    e = a.y + b.y;
    r = a.z + b.z;

    printf("\n\n As coordenadas do vetor soma dos dois vetores digitados eh: (%.2f ; %.2f ; %.2f)",w,e,r);

    return 0;
}