#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    int x,y;

    printf("digite um numero para saber se ele eh par ou impar ");
    scanf("%d", &x);

    if (x%2==0) {printf("este numero eh par");}
    else printf("\nesse numero eh impar");

    return 0;

}