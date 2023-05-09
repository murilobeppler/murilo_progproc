#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int saque;
    int cem, cinquenta, vinte, dez, cinco, dois, um;

    printf("digite o total do seu saque: \n");
    scanf("%d", &saque);

    cem = saque / 100;
    saque = saque % 100;

    cinquenta = saque / 50;
    saque = saque % 50;

    vinte = saque / 20;
    saque = saque % 20;

    dez = saque / 10;
    saque = saque % 10;

    cinco = saque / 5;
    saque = saque % 5;

    dois = saque / 2;
    saque = saque % 2;

    um = saque;

    printf("\nquantidade de notas de 100: %d", cem);
    printf("\nquantidade de notas de 50:%d", cinquenta);
    printf("\nquantidade de notas de 20:%d", vinte);
    printf("\nquantidade de notas de 10:%d", dez);
    printf("\nquantidade de notas de 5:%d", cinco);
    printf("\nquantidade de notas de 2:%d", dois);
    printf("\nquantidade de notas de 1:%d", um);

    return 0;
}