#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, z;
    float a;

    printf("digite tres numeros e veja a soma deles aparecer na tela\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    a = x * x + y * y + z * z;

    printf("\n%.2f", a);

    return 0;
}