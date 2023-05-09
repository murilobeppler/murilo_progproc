#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i=0, num;
    printf("Digite um numero natural e vamos imprimir de 0 ate o numero escolhido:\n");
    scanf("%i", &num);
    
    while (i<=num)
    {
        printf("\n%i", i);
        i++;
    }
    
    return 0;
}