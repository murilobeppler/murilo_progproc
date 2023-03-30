#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    float s,p;
    printf("qual eh seu salario\?  ");
    scanf("%f", &s);

    printf("quanto voce quer de emprestimo\?  ");
    scanf("%f", &p);

    

    if (p>0.2*s){
        printf("emprestimo nao concedido");
    }

    if (p<=0.2*s){
        printf("emprestimo concedido");
    }

    return 0;

}