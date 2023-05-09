#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void triangulo_asteristico (int n) {
    int i,j, esp=n;

    for (i=0; i<=n; i++){
        for (j=0; j<esp; j++) {
            printf(" ");
        }
        for (j=0; j<(2*i)-1; j++) {
            printf("*");
        }
        printf("\n");
        esp--;
    }

}

int main () 
{
    int n;

    printf("digite a altura do triangulo de '*' que voce deseja desenhar. \n numero: ");
    scanf("%d", &n);

    triangulo_asteristico (n);

    return 0;
}