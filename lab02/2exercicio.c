#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    float x,y;
    printf("digite um numero para ser calculada sua raiz quadrada  ");
    scanf("%f", &x);

    if (x >=0){ 
        
        x = sqrt(x); 
        printf("assim, a raiz quadrada eh %.1f",x);
    
    };

    if (x<0) {printf(" nao eh possivel calcular a raiz quadrada do numero inserido sem o conjunto dos imaginarios");};

    return 0;

}