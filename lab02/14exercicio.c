#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float tl, as, ef;
    float x, y, z; // pesos respectivos
    float a;

    printf(" digite respectivamente a nota da sua trabalho de laboratorio, avaliacao semestral e exame final ");
    scanf("%f", &tl);
    scanf("%f", &as);
    scanf("%f", &ef);

    x = 2;
    y = 3;
    z = 5;

    a = ((tl * x) + (as * y) + (ef * z)) / (x + y + z);

    if (a >= 0 && a <= 2.9)
    {
        printf("\nvoce esta reprovado");
    }
    else
    {

        if (a >= 3 && a <= 4.9)
        {
            printf("\nvoce esta de recuperacao");
        }
        else
        {
            if (a >= 5 && a <= 10)
            {
                printf("\nparabens voce esta aprovado");
            }
        }
    }

    return 0;
}