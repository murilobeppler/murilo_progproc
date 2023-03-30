#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ()
{
    float x;
    printf("digite um numero positivo ");
    scanf("%f", &x);

        if (x>= 0) {
                x=log10(x);
                printf("o logaritimo do numero digitado eh %f",x);

        }
        else {
            printf("o numero digitado eh invalido");
        }
    

    return 0;

}