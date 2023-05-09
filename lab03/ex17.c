#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int chico = 150, ze = 110, i = 0;

    while (chico > ze)
    {
        chico = chico + (2 * i);
        ze = ze + (3 * i);
        i++;
    }

    printf("Ze se tornara da mesma altura de Chico em %d anos.", i);

    return 0;
}