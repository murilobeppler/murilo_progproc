#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int soma_entre_nums (int x, int y) {
    int i,soma=0;

    for (i=x+1;i<y; i++) {
        soma += i;
    }

    return soma;
}

int main () 
{
    int x,y, z;

    printf("digite dois numeros e iremos calcular a soma dos numeros entre eles. \n numeros: ");
    scanf("%d %d", &x,&y);

    z = soma_entre_nums (x,y);

    printf("\n A soma dos numeros entre %d e %d eh: %d",x,y,z);

    return 0;
}