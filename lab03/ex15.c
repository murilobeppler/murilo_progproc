#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float num, x, y, z;

    x = num * num;

    y = num * num * num;

    z = sqrt(num);

    do
    {
        printf("\n\ndigite um numero. Se o resultado quadratico,cubico ou raiz for negativo o programa finalizara.\n numero: ");
        scanf("%f", &num);

        x = num * num;

        y = num * num * num;

        z = sqrt(num);

        printf("\n%.2f", x);
        printf("\n%.2f", y);
        printf("\n%.2f", z);

    } while (x > 0 && y > 0 && z > 0);

    if (x <= 0 || y <= 0 || z <= 0)
        printf("\n\nprograma finalizado");

    return 0;
}