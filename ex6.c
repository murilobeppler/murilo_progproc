#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
int i=1;
float media=0, x;

    while (i<11)
    {
        printf("digite o %do numero para media ",i);
        scanf("%f",&x);

        media +=  x;
        ++i;
    }
        printf("\na media assim eh: %.2f",media/10);

    return 0;
}