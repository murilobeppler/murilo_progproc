#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
   float x,y; 
   float z, w;
   w= x*y;
   printf("qual valor da sua hora de trabalho em reais\? ");
   scanf("%f", &x);
   printf(" e quantas horas por mes voce trabalha\? ");
   scanf("%f", y);
    w= x*y;
    z= 1.1*w;
   printf("assim, seu salario mensal com um acrescimo de 10%% no valor eh de", z);


    return 0;
}