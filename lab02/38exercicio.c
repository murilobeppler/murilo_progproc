#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int d, m, a;
    printf("qual sua data de nascimento? ");
    scanf("%d %d %d", &d, &m, &a);

    if (a > 2022)
    {
        printf("data invalida");
    }
    else if (m > 12 || m < 1)
    {
        printf("data invalida");
    }

    if (m == 4 || m == 6 || m == 9 || m == 11 && d > 30)
    {
        printf("data invalida");
    }
    else if (m == 2 && a % 4 == 0 && a % 100 != 0 || a % 400 == 0 && d > 29)
    {
        printf("data invalida");
    }
    else if (m == 2 && a % 4 == 0 && a % 100 != 0 || a % 400 == 0 && d > 28)
    {
        printf("data invalida");
    }
    else
        printf("\n %d / %d / %d", d, m, a);

    return 0;
}