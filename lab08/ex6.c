#include <stdio.h>

int main() {
    int x,y;
    int* p,*q;

    *p = x;
    *q = y;

    printf("digite dois numeros inteiros: ");
    scanf("%d %d",&(*p),&(*q));

    printf("\nA soma desses valores eh: %d ", (*p)+(*q));
    printf("\nA multiplicacao desses valores eh: %d ", (*p)*(*q));
    printf("\nA subtrtacao desses valores eh: %d ",(*p)-(*q));
    printf("\nA divisao desses valores em inteiro eh: %d ",(*p)/(*q));

    return 0;
}