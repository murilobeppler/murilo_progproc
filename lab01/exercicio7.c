#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float C, F;

    printf("digite uma temperatura em grau farenheit para saber ela em graus celsius ");

    scanf("%f", &F);

    C = 5.0 * (F - 32.0) / 9.0;

    printf("essa temperatura em grau celsisu eh: %.2f C", C);

    return 0;
}
