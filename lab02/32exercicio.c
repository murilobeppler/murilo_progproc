#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int c, q;
    printf("digite o codigo de seu pedido ");
    scanf("%d", &c);
    printf("e quantos dele voce vai querer?");
    scanf("%d", &q);

    if (c = 100)
        printf("o total a ser pago sera: %.2f", q * 1.20);
    else if (c == 101)
        printf("o total a ser pago sera: %.2f", q * 1.30);
    else if (c == 102)
        printf("o total a ser pago sera: %.2f", q * 1.50);
    else if (c == 103)
        printf("o total a ser pago sera: %.2f", q * 1.20);
    else if (c == 104)
        printf("o total a ser pago sera: %.2f", q * 1.70);
    else if (c == 105)
        printf("o total a ser pago sera: %.2f", q * 2.20);
    else if (c == 106)
        printf("o total a ser pago sera: %.2f", q);
    else
        printf("codigo digitado nao valido");
    return 0;
}