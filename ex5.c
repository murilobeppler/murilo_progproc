#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
 int i=1;
    float soma=0, n;
    while(i<=10)
    {
        printf("Digite o %do numero para soma: ", i);
        scanf("%f", &n);
        soma+=n;
        i++;
    }
    printf("A soma total eh: %.3f", soma);

    return 0;
}