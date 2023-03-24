#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
   float v,x,y,z;
    float n,a, w;
    n=4;

    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    scanf("%f",&v);

    a=x+y+z+v;

    w= a/n;

    printf("\n\n\n%f", w);

    return 0;
}