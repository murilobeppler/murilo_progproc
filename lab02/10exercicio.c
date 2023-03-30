#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{   int h, y,z;
   char m,M,F,f;
    printf("qual eh a sua altura ");
    scanf("%d", &h);
    
    printf("digite seu sexo, use m/M para homem e f/F ");
  y= getchar ( );

   switch (y)
   {
   case m : z= (72,7 * h) - 58,0;
        printf("seu suposto peso ideal eh: %i ", z);
   break;

   case M:
        z=  (72,7 * h) - 58,0;
        printf("seu suposto peso ideal eh: %i ", z);
   break;

   case f:
        z= (62,1 * h) - 44,7;
        printf("seu suposto peso ideal eh: %i  ", z);
   break;

   case F:
        z= (62,1 * h) - 44,7;
        printf("seu suposto peso ideal eh: %i ", z);
    break;
   
   }
    return 0;

} 