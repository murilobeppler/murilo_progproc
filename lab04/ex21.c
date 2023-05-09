#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void arvore_exclamacao (int n) {
    int i,j;

    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++){
            printf("!");
        }
        printf("\n");
    }
}

int main () 
{
    int n;

    printf("digite quantas linhas voce quer na sua arvore de exclamacao ");
    scanf("%d", &n);

    arvore_exclamacao (n);

    return 0;
}