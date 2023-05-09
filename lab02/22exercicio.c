#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("digite sua idade ");
    scanf("%d", &x);

    printf("digite quantos anos voce trabalha ");
    scanf("%d", &y);

    if (x >= 65)
    {
        printf("voce ja pode se aposentar");
    }
    else if (y >= 30)
    {
        printf("voce ja pode se aposentar ");
    }
    else if (x >= 60 && y >= 25)
    {
        printf("voce pode se aposentar ");
    }
    else
        printf("voce ainda nao pode se aposentar");

    return 0;
}