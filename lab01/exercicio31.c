#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, z;

    printf("digite um numero inteiro: \n");
    scanf("%d", &x);
    y = x - 1;
    z = x + 1;

    printf("antecessor  %d \ninicial  %d \nsucessor  %d", y, x, z);

    return 0;
}