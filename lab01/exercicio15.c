#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float R,G;
const double pi =  3.141592;

scanf("%f",&R);

    G = R*180/pi;
    
    printf("%fgraus",G);

    return 0;
}