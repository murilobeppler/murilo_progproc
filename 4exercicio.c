#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    float x,y;

    printf("insira um numero positivo para saber sua raiz quadrada e ele elevado ao quadrado ");

    scanf("%f",&x);

    if (x>=0) {printf("a raiz quadrada do numero eh %.0f",sqrt(x));
    
     printf("\n e ao quadrado eh %.0f ", pow(x,2));
     
     }
    
    else {printf("o numero posto foi negativo, por favor coloque um numero positivo");};


    return 0;

}