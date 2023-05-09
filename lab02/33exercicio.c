#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, x;

    printf("qual o valor do produto antigo?");
    scanf("%d", &a);

    if (a <= 50)
    {
        x = a * 1.05;
        printf("\n o valor novo eh: %d", x);
    }
    else if (a > 50 && a <= 100)
    {
        x = a * 1.1;
        printf("\n o valor novo eh: %d", x);
    }
    else if (a > 100)
    {
        x = a * 1.15;
        printf("\n o valor novo eh: %d", x);
    }

    if (x <= 80)
        printf("\nbarato");
    else if (x > 80 && x <= 120)
        printf("\nnormal");
    else if (x > 120 && x <= 200)
        printf("\ncaro");
    else if (x > 200)
        printf("\nmuito caro");

    return 0;
}