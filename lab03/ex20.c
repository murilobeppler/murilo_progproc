#include <stdio.h>

int isPrime(long n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    long soma = 0;

    for (long i = 1; i < 2000000; i++)
    {
        if (isPrime(i))
        {
            soma += i;
        }
    }

    printf("A soma de todos os numeros primos abaixo de 2 milhoes eh: %ld", soma);

    return 0;
}
