#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    char a;

    printf("escolha uma das opcoes\n");
    printf("(+)\n");
    printf("(-)\n");
    printf("(x)\n");
    printf("(/)\n");
    scanf("%c", &a);

    printf(" digite um numero ");
    scanf("%d", &x);

    printf("digite outro numero ");
    scanf("%d", &y);

    switch (a)
    {
    case '+':
        printf(" o resultado da soma dos dois numeros digitados eh: %d", x + y);
        break;

    case '-':
        printf(" o resultado da subtracao dos dois numeros digitados eh: %d", x - y);
        break;

    case 'x':
        printf(" o resultado da multiplicacao dos dois numeros digitados eh: %d", x * y);
        break;

    case '/':
        printf(" o resultado da divisao dos dois numeros digitados eh: %d", x / y);
        break;

    default:

        printf("o sinal posto eh invalido");
        break;
    }

    return 0;
}