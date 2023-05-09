#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, acertos = 0;
    float a, b, soma, resp;
    for (i = 0; i < 5; i++)
    {
        a = (rand() % 100) + 1;
        b = (rand() % 100) + 1;
        soma = a + b;

        printf("qual eh a soma de %.2f + %.2f?\n", a, b);
        scanf("%f", &resp);
        if (resp != soma)
            printf("resposta errada. a resposta certa e:%.2f\n", soma);
        else
            acertos++;
    }
    printf("voce acertou em:%d\n", acertos);
    return 0;

    return 0;
}