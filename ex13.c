#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 int i, soma=0;

    for (i=0;i<1000;i++) {
        if (i%3==0 || i%5==0) {
            printf("%d  ",i);
            soma +=i;
        }
    }
    printf("\n\n%d",soma);
    return 0;
}