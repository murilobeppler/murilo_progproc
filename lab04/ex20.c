#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Pri(int num)
{
    int i, j, primo, p = 0;
    for (i = 1; i < num; i++)
    {
        primo = 1;
        for (j = 2; j <= i; j++)
        {
            if (((i % j ) == 0) && (j!= i))
            {
                primo = 0;
                break;
            }
        }
        if (primo == 1 && i != 1)
        {
            p++;
        }
    }
    return p;
}

int main()
{
    int num, primo;
    printf("Digite um numero e para calcular quantos numeros primos existem a abaixo desse numero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        primo = Pri(num);
        printf("Ha %d numeros primos abaixo de %d", primo, num);
    }
    else
    {
        printf("Erro!");
    }
    return 0;
}