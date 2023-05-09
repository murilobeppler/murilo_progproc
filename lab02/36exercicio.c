#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float valor, comissao;

    printf("qual o valor da venda?");
    scanf("%f", &valor);

    if (valor >= 100000)
        printf("%.2f", (0.16 * valor + 700));
    else if (valor < 100000 && valor >= 80000)
        printf("o valor da comissao eh: %.2f", (0.14 * valor + 650));
    else if (valor < 80000 && valor >= 60000)
        printf("o valor da comissao eh: %.2f", (0.14 * valor + 600));
    else if (valor < 60000 && valor >= 40000)
        printf("o valor da comissao eh: %.2f", (0.14 * valor + 550));
    else if (valor < 40000 && valor >= 20000)
        printf("o valor da comissao eh: %.2f", (0.14 * valor + 500));
    else if (valor < 20000)
        printf("o valor da comissao eh: %.2f", (0.14 * valor + 400));

    return 0;
}