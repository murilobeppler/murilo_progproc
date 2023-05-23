#include <stdio.h>

int main() {
    int x,y;
    int* p,*q;

    p = &x;
    q = &y;

    printf("o valor de x e y sao respectivamente: %d e %d ",x,y);

    if (p>q) {
        printf("o maior endereco de memoria eh da variavel x, este endereco eh: %p",p);
    } else {
        printf("\n o maior endereco de memoria eh da variavel y,  este endereco eh: %p ",q);
    }
    return 0;
}