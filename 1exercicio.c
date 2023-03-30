#include<stdio.h>

int main ()
{
    float x,y;
    printf("digite um numero\n");
    scanf("%f", &x);

    printf("digite mais um numero\n");
    scanf("%f", &y);

    if (x>y){printf("o primeiro numero eh maior que o segundo\n");};
    if (y>x){printf("o segundo numero eh maior que o primeiro\n");};
    if (x==y){printf("os dois numeros sao iguais\n");};

    return 0;

}