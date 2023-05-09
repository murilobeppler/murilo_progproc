#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    char a;

    printf("escolha uma das opcoes a seguir (pelo numero)");
    printf("\n1- Soma de 2 numeros.");
    printf("\n2- Diferenca entre 2 numeros (maior pelo menor).");
    printf("\n3- Produto entre 2 numeros.");
    printf("\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).");

    scanf("%c", &a);

    printf("digite um numero inteiro ");
    scanf("%d", &x);

    printf("digite outro numero inteiro ");
    scanf("%d", &y);

    switch (a)
    {
    case '1':
        printf(" o resultado da soma dos dois numeros digitados eh: %d", x + y);
        break;

    case '2':

        if (y > x)
        {
            printf("o resultado da subtracao eh: %d", y - x);
        }
        if (x > y)
        {
            printf("o resultado da subtracao eh: %d", x - y);
        }
        else
            printf("o resultado da subtracao eh: 0");
        break;

    case '3':
        printf(" o resultado da multiplicacao dos dois numeros digitados eh: %d", x * y);
        break;

    case '4':
        if (y > 0 || y < 0)
            printf(" o resultado da divisao dos dois numeros digitados eh: %d", x / y);
        if (y == 0)
        {
            printf("nao eh possivel fazer essa conta");
        }
        break;

    default:

        printf("uma opcao invalida foi escolhida");
        break;
    }

    return 0;
}