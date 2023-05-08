#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, a;

    printf("digite tres numeros inteiros ");

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    a = x + y + z;

    printf("\n a soma dos tres numeros digitados eh: %d", a);
    return 0;
}