#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int quadper (int x) {
    if (sqrt (x) == (int)(sqrt(x)))
        return 0;
    else if (sqrt (x) != (int)(sqrt(x)) && x>=0)
        return -1;
    else if (x<0)
        return 1;
}

int main () 
{
    int x,y;

    printf("digite um numero para verificar se ele eh um quadrado perfeito. \nnumero: ");
    scanf("%d", &x);

    y = quadper (x);

    if (y == 0) 
    printf("este numero eh um quadrado perfeito");
    else if (y==1)
    printf("numero digitado invalido");
    else if (y==-1)
    printf("este numero nao eh um quadrado perfeito");

    return 0;
}