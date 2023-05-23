#include <stdio.h>

int main() {
    int x,y;
    int* p,*q;

    p = &x;
    q = &y;

    printf("digite dois valores inteiros para X e Y: ");
    scanf("%d %d", &x,&y);

    if (p>q) {
        printf("o valor de X esta ocupando um maior endereco de memoria.\n\n x: %p > y:%p",p,q);
    } else printf("o valor de Y esta ocupando um maior endereco de memoria.\n\n y: %p > x:%p",q,p);
}