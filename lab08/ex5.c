#include <stdio.h>

int main() {
    int A,B;
    int* p,*q;

    p = &A;
    q = &B;

    printf("digite dois valores inteiros para A e B: ");
    scanf("%d %d",&A,&B);

    *p = A*2;
    *q = B*2;

    printf("A soma do do dobro dos dois numeros digitados eh: %d",*p+*q);

    return 0;
}