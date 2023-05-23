#include <stdio.h>

int main() {
    int i=2;
    float r=5.1;
    char a='b';
    int* p;
    float* q;
    char* s;

    p = &i;
    q = &r;
    s = &a;

    printf("os valores das variaveis antes da modificacao sao: %d, %.2f, %c ",i,r,a);
    
    (*p)++;
    (*q) *= *p;
    (*s)--;
    
    printf("\n Os valores das variaveis depos da modificacao sao: %d, %.2f, %c ",i,r,a); 

    return 0;
}