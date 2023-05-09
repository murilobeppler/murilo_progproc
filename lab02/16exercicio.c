#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("digite um numero de 1 a 12\n\n");
    scanf("%i", &x);
    switch (x)
    {
    case 1:
        printf("janeiro");

        break;

    case 2:
        printf("fevereiro");

        break;
    case 3:
        printf("marco");

        break;
    case 4:
        printf("abril");

        break;
    case 5:
        printf("maio");

        break;
    case 6:
        printf("junho");

        break;

    case 7:
        printf("julho");

        break;

    case 8:
        printf("agosto");

        break;
    case 9:
        printf("setembro");

        break;
    case 10:
        printf("outubro");

        break;
    case 11:
        printf("novembro");

        break;

    case 12:
        printf("dezembro");

        break;

    default:
        printf("voce nao digitou um numero de 1 a 12");
        break;

        return 0;
    }
}