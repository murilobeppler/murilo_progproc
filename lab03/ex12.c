#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78*/

int main()
{
    int num, i, soma = 0, x;

    printf("digite um numero inteiro e sera calculado a soma de todos os divisores desse numero exceto ele mesmo. \nnumero: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {

        x = num % i;

        if (x == 0)
        {
            soma += i;
        }
    }

    printf("a soma total eh: %d", soma);

    return 0;
}