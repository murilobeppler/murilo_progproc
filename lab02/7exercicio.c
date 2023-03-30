#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    float x,y;;
    printf("digite um numero  ");
    scanf("%f",&x);

     printf("digite mais um numero  ");
    scanf("%f",&y);

    if (x==y){ printf("os numeros digitados sao iguais");};

    if (x>y){printf("\n%.0f eh maior que %.0f\n\n",x,y);};


    if (y>x) {printf("\n%.0f eh maior que %.0f\n\n",y,x);};

    // queria fazer com else esse exercicio mais nao consegui 


    


    return 0;

}