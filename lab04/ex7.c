#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float conv_C_F (float c) {
    return ((c* (9.0/5.0)) + 32.0);
}

int main () 
{
    float C, F;

    printf("digite um valor de temperatura em graus celsius e veja-o convertido em fahrenheit: ");
    scanf("%f", &C);

    F = conv_C_F (C);

    printf("\nO valor em fahrenheit eh: %.2f F", F);

    return 0;
}