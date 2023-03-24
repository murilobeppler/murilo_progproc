#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
   float a, b, hipotenusa;
   
scanf("%f", &a);
scanf("%f",&b);

hipotenusa =  sqrt(a*a + b*b);

printf("%fcomprimento da hipotenusa", hipotenusa );
    return 0;
}