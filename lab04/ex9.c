#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592
//: 𝑉 = PI* r^2 * h

float volume_cilindro (float r, float h) {
    return (PI * ((r*r) *h));
}

int main () 
{
    float V, h, r;

    printf("digite o valor do raio e altura de um cilindro para saber seu volume: ");
    scanf("%f %f", &r, &h);

    V = volume_cilindro (r,h);

    printf("\n O valor do volume deste cilindro eh: %.2f", V);

    return 0;
}