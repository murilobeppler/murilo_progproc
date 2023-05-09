#include <stdio.h>

int main()
{
    int i, j, a, b, t = 0, np = 0, iv = 0;

    printf("Digite dois numeros para verificar quantos numeros primos esxistem entre eles:\n");
    scanf("%d%d", &a, &b);

    if (a >= 0 && a < b)
    {
        for (i = a + 1; i < b; i++)
        {
            np = 1;
            for (j = 2; j <= i; j++)
            {
                if (((i % j) == 0) && (j != i))
                {
                    np = 0;
                    break;
                }
            }
            if (np != 0 && i != 1)
            {
                t++;
            }
        }
    }
    else
    {
        printf("Numero invalido!");
        iv = 1;
    }
    if (!iv)
    {
        printf("Existe %d numero(s) primo(s) entre %.2d e %.2d", t, a, b);
    }
    return 0;
}