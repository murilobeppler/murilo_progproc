#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

int main()
{
    int x, y, z;

    printf("em que ano estamos\? ");
    scanf("%d", &x);

    printf("qual sua idade\? ");
    scanf("%d", &y);

    z = x - y;
    printf("assim, seu ano de nascimento eh: %d", z);

    return 0;
}