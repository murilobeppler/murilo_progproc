#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int expoente (int x, int z) {
    int i,y=x;
    for (i=1; i<z; i++) {
        y *= x;
    }
    return y;
}

int main () 
{
    int x,z,a;

    printf("digite dois numeros para fazer o primeiro elevado ao segundo numero. \n numeros: ");
    scanf("%d %d", &x,&z);

    a = expoente (x,z);

    printf("\n O valor dessa conta eh: %d",a);

    return 0;
}