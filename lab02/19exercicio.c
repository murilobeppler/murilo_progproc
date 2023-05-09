#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("digite um numero inteiro ");
    scanf("%d", &x);

    if (x % 3 == 0 && x % 5 == 0)
    {
        printf("o numero digitado eh divisivel por 3 e por 5");
    }

    else if (x % 3 == 0)
    {
        printf("o numero digitado eh divisivel por 3");
    }
    else if (x % 5 == 0)
    {
        printf("o numero digitado eh divisvel por 5 ");
    }

    return 0;
}