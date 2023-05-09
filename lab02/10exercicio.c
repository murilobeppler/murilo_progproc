#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     float z, h;
     char y, m, M, F, f;

     printf("digite seu sexo, use m/M para homem e f/F:  ");
     scanf("%c", &y);

     printf("qual eh a sua altura:  ");
     scanf("%f", &h);

     switch (y)
     {
     case 'm':
          z = (72.7 * h) - 58;
          printf("seu suposto peso ideal eh: %.2f ", z);
          break;

     case 'M':
          z = ((72.7 * h) - 58);
          printf("seu suposto peso ideal eh: %.2f ", z);
          break;

     case 'f':
          z = (62.1 * h) - 44.7;
          printf("seu suposto peso ideal eh: %.2f  ", z);
          break;

     case 'F':
          z = (62.1 * h) - 44.7;
          printf("seu suposto peso ideal eh: %.2f ", z);
          break;
     }

     return 0;
}