#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int dobro(int x)
{
    return 2 * x;
}

int main()
{
    int x;

    printf("digite um numeor para descobrir seu dobro: \n");
    scanf("%d", &x);

    x = dobro(x);

    printf("O dobro do numero digitado eh: %d", x);

    return 0;
}