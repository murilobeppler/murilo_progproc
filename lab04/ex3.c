#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int posneg (int x) {
    if (x<0) 
        return -1;
    if (x>0)
        return 1;
    if (x==0)
        return 0;

}

int main () 
{
    int num,y;

    printf("digite um numero para verificar se ele eh positivo, negativo ou 0. \n numero: ");
    scanf("%d", &num);

    y= posneg (num);

    if (y == 1) {
        printf("este numero eh positivo");
    }
    if (y == -1) {
        printf("este numero eh negativo");
    }
    if (y == 0) {
        printf("este numero eh 0");
    }

    return 0;
}