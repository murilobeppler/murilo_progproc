#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i, x, d1, d2;
    printf("Digite a quantidade de vezes que os dois dados devem ser lancados:\n");
    scanf("%d", &x);
    for(i=1; i<=x; i++){
        d1= (rand()%6)+1;
        d2= (rand()%6)+1;
        printf("Lancamento %d:\n", i);
        printf("Valor dado 1: %d, valor dado 2: %d \n", d1, d2);
        if(d1>d2){
            printf("Dado 1 > dado 2 \n");
            printf("\n");
        }else if(d1==d2){
            printf("Dado 1 = dado 2 \n");
            printf("\n");
        }else{
            printf("Dado 2 > dado 1 \n");
        printf("\n");}
    }
    return 0;
}