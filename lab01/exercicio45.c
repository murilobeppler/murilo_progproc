#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.

int main()
{
    char a;
    char z;

    printf("digite uma letra em maisculo e veja-a se transformando em minuscula: ");
    scanf("%c", &a);
    z = a + 32;
    printf("%c", z);

    return 0;
}